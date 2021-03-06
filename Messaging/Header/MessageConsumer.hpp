#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief An API to allow association with a consumer-side messaging endpoint
* */
class MessageConsumer 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \brief Copy assignment operator
    // MessageConsumer& operator= (const MessageConsumer &original);

    //! \brief Move assignment operator
    // MessageConsumer& operator= (MessageConsumer &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \brief \<Brief description goes here\>
    *
    * \param[in] \<Parameter description goes here\>
    * */
    // MessageConsumer (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    MessageConsumer(void) = default;

    //! \brief Copy Constructor
    MessageConsumer(const MessageConsumer &original) = default;

    //! \brief Move Constructor
    // MessageConsumer(const MessageConsumer &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageConsumer(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \brief Private Default Constructor
    // MessageConsumer(void) = default;
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