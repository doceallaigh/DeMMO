#include <GL/glew.h>
#include <glm/ext.hpp>
#include <iostream>
#include <fstream>
#include "../Header/OpenGLWindow.hpp"

OpenGLWindow::OpenGLWindow() 
{
	this->x = 0;
	this->y = 0;
	this->width = 1024;
	this->height = 768;

	this->window = glfwCreateWindow(this->width, this->height, "MMO", nullptr, nullptr);
	this->monitor = glfwGetPrimaryMonitor();
}

// TODO ELIMINATE THIS
GLuint LoadShaders(const char * vertex_file_path, const char * fragment_file_path) {

	// Create the shaders
	GLuint VertexShaderID = glCreateShader(GL_VERTEX_SHADER);
	GLuint FragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);

	// Read the Vertex Shader code from the file
	std::string VertexShaderCode;
	std::ifstream VertexShaderStream(vertex_file_path, std::ios::in);
	if (VertexShaderStream.is_open()) {
		std::string Line = "";
		while (getline(VertexShaderStream, Line))
			VertexShaderCode += "/n" + Line;
		VertexShaderStream.close();
	}
	else {
		printf("Impossible to open %s. Are you in the right directory ? Don't forget to read the FAQ !/n", vertex_file_path);
		getchar();
		return 0;
	}

	// Read the Fragment Shader code from the file
	std::string FragmentShaderCode;
	std::ifstream FragmentShaderStream(fragment_file_path, std::ios::in);
	if (FragmentShaderStream.is_open()) {
		std::string Line = "";
		while (getline(FragmentShaderStream, Line))
			FragmentShaderCode += "/n" + Line;
		FragmentShaderStream.close();
	}

	GLint Result = GL_FALSE;
	int InfoLogLength;


	// Compile Vertex Shader
	printf("Compiling shader : %s/n", vertex_file_path);
	char const * VertexSourcePointer = VertexShaderCode.c_str();
	glShaderSource(VertexShaderID, 1, &VertexSourcePointer, NULL);
	glCompileShader(VertexShaderID);

	// Check Vertex Shader
	glGetShaderiv(VertexShaderID, GL_COMPILE_STATUS, &Result);
	glGetShaderiv(VertexShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
	if (InfoLogLength > 0) {
		std::vector<char> VertexShaderErrorMessage(InfoLogLength + 1);
		glGetShaderInfoLog(VertexShaderID, InfoLogLength, NULL, &VertexShaderErrorMessage[0]);
		printf("%s/n", &VertexShaderErrorMessage[0]);
	}



	// Compile Fragment Shader
	printf("Compiling shader : %s/n", fragment_file_path);
	char const * FragmentSourcePointer = FragmentShaderCode.c_str();
	glShaderSource(FragmentShaderID, 1, &FragmentSourcePointer, NULL);
	glCompileShader(FragmentShaderID);

	// Check Fragment Shader
	glGetShaderiv(FragmentShaderID, GL_COMPILE_STATUS, &Result);
	glGetShaderiv(FragmentShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
	if (InfoLogLength > 0) {
		std::vector<char> FragmentShaderErrorMessage(InfoLogLength + 1);
		glGetShaderInfoLog(FragmentShaderID, InfoLogLength, NULL, &FragmentShaderErrorMessage[0]);
		printf("%s/n", &FragmentShaderErrorMessage[0]);
	}



	// Link the program
	printf("Linking program/n");
	GLuint ProgramID = glCreateProgram();
	glAttachShader(ProgramID, VertexShaderID);
	glAttachShader(ProgramID, FragmentShaderID);
	glLinkProgram(ProgramID);

	// Check the program
	glGetProgramiv(ProgramID, GL_LINK_STATUS, &Result);
	glGetProgramiv(ProgramID, GL_INFO_LOG_LENGTH, &InfoLogLength);
	if (InfoLogLength > 0) {
		std::vector<char> ProgramErrorMessage(InfoLogLength + 1);
		glGetProgramInfoLog(ProgramID, InfoLogLength, NULL, &ProgramErrorMessage[0]);
		printf("%s/n", &ProgramErrorMessage[0]);
	}


	glDetachShader(ProgramID, VertexShaderID);
	glDetachShader(ProgramID, FragmentShaderID);

	glDeleteShader(VertexShaderID);
	glDeleteShader(FragmentShaderID);

	return ProgramID;
}

void OpenGLWindow::Render(const Mesh& mesh) 
{
	if (this->camera != nullptr) 
	{
		Color clearColor = this->camera->clearColor;

		// TODO This shouldn't be done every frame
		glClearColor(clearColor.r, clearColor.g, clearColor.b, clearColor.a);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Create and compile our GLSL program from the shaders
		GLuint programID = LoadShaders("StandardShading.vertexshader", "StandardShading.fragmentshader");

		// Get a handle for our "MVP" uniform
		GLuint MatrixID = glGetUniformLocation(programID, "MVP");
		GLuint ViewMatrixID = glGetUniformLocation(programID, "V");
		GLuint ModelMatrixID = glGetUniformLocation(programID, "M");

		// TODO Don't use this, do it yourself, little babby
		glm::mat4 projectionMatrix = glm::perspective(90.0f, 4.0f / 3.0f, 0.1f, 100.0f);
		glm::mat4 viewMatrix = glm::lookAt(glm::vec3(0, 0, 5), glm::vec3(0, 0, 0), glm::vec3(0, 1, 0));
		glm::mat4 modelMatrix = glm::mat4(1.0);
		glm::mat4 MVP = projectionMatrix * viewMatrix * modelMatrix;

		glUseProgram(programID);

		glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &MVP[0][0]);
		glUniformMatrix4fv(ModelMatrixID, 1, GL_FALSE, &modelMatrix[0][0]);
		glUniformMatrix4fv(ViewMatrixID, 1, GL_FALSE, &viewMatrix[0][0]);

		// TODO This probably shouldn't be done as part of the window
		std::vector<Transform> vertices = mesh.GetVertexBuffer();
		GLuint vertexBufferId;
		glGenBuffers(1, &vertexBufferId);
		glBindBuffer(GL_ARRAY_BUFFER, vertexBufferId);
		glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Transform), &(vertices[0]), GL_STATIC_DRAW);

		std::vector<Transform> uvs = mesh.GetTextureBuffer();
		GLuint uvBufferId;
		glGenBuffers(1, &uvBufferId);
		glBindBuffer(GL_ARRAY_BUFFER, uvBufferId);
		glBufferData(GL_ARRAY_BUFFER, uvs.size() * sizeof(Transform), &uvs[0], GL_STATIC_DRAW);

		std::vector<Vector> normals = mesh.GetNormalBuffer();
		GLuint normalBufferId;
		glGenBuffers(1, &normalBufferId);
		glBindBuffer(GL_ARRAY_BUFFER, normalBufferId);
		glBufferData(GL_ARRAY_BUFFER, normals.size() * sizeof(Vector), &(normals[0]), GL_STATIC_DRAW);

		// TODO This is only accounting for the vertices.  To account for all parameters we need to create one multi-parameter object for each combination and collapse it on matches. (See tutorial 9 if this no longer makes sense)
		std::vector<unsigned short> indices = mesh.GetVertexIndices();

		GLuint indexBufferId;
		glGenBuffers(1, &indexBufferId);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferId);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned short), &(indices[0]), GL_STATIC_DRAW);

		glUseProgram(programID);

		// 1rst attribute buffer : vertices
		glEnableVertexAttribArray(0);
		glBindBuffer(GL_ARRAY_BUFFER, vertexBufferId);
		glVertexAttribPointer(
			0,                  // attribute
			3,                  // size
			GL_FLOAT,           // type
			GL_FALSE,           // normalized?
			0,                  // stride
			(void*)0            // array buffer offset
		);

		// 2nd attribute buffer : UVs
		glEnableVertexAttribArray(1);
		glBindBuffer(GL_ARRAY_BUFFER, uvBufferId);
		glVertexAttribPointer(
			1,                                // attribute
			3,                                // size
			GL_FLOAT,                         // type
			GL_FALSE,                         // normalized?
			0,                                // stride
			(void*)0                          // array buffer offset
		);

		// 3rd attribute buffer : normals
		glEnableVertexAttribArray(2);
		glBindBuffer(GL_ARRAY_BUFFER, normalBufferId);
		glVertexAttribPointer(
			2,                                // attribute
			3,                                // size
			GL_FLOAT,                         // type
			GL_FALSE,                         // normalized?
			0,                                // stride
			(void*)0                          // array buffer offset
		);

		// Index buffer
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferId);

		// Draw the triangles !
		glDrawElements(
			GL_TRIANGLES,      // mode
			indices.size(),    // count
			GL_UNSIGNED_SHORT, // type
			(void*)0           // element array buffer offset
		);

		glDisableVertexAttribArray(0);
		glDisableVertexAttribArray(1);
		glDisableVertexAttribArray(2);

		// Swap buffers
		glfwSwapBuffers(this->window);
		glfwPollEvents();
	}
}

void OpenGLWindow::SetActive()
{
	glfwMakeContextCurrent(this->window);
}

void OpenGLWindow::HandleFullScreenChanged() 
{
	GLFWmonitor* monitor = nullptr;

	if (this->fullScreen) 
	{
		monitor = this->monitor;
	}

	glfwSetWindowMonitor(this->window, this->monitor, this->x, this->y, this->width, this->height, 60);
}