#pragma once
template <typename T>
class WindowManager 
{
public:
	T* GenerateWindow() 
	{
		return new T();
	}
protected:
private:
};