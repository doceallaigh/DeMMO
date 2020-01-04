#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief \<Brief description goes here\>
 * 
 * \<Detailed description goes here\>
 * */
class EntityComponent 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \brief Copy assignment operator
    // EntityComponent& operator= (const EntityComponent &original);

    //! \brief Move assignment operator
    // EntityComponent& operator= (EntityComponent &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \brief \<Brief description goes here\>
    *
    * \param[in] \<Parameter description goes here\>
    * */
    // EntityComponent (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    EntityComponent(void) = default;

    //! \brief Copy Constructor
    EntityComponent(const EntityComponent &original) = default;

    //! \brief Move Constructor
    // EntityComponent(const EntityComponent &&original) noexcept = default;

    //! \brief Destructor
    virtual ~EntityComponent(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \brief Private Default Constructor
    // EntityComponent(void) = default;
#pragma endregion

public:
#pragma region Public Methods
#pragma endregion

protected:
#pragma region Protected Methods
#pragma endregion

private:
#pragma region Private Methods
#pragma endregion

public:
#pragma region Public Fields
#pragma endregion

protected:
#pragma region Protected Fields
#pragma endregion

private:
#pragma region Private Fields
#pragma endregion
};