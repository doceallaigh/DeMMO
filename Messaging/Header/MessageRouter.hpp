#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class MessageProducerEndpoint;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class MessageRouter 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // MessageRouter& operator= (const MessageRouter &original);

    //! \cond \brief Move assignment operator \endcond
    // MessageRouter& operator= (MessageRouter &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // MessageRouter (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    MessageRouter(void) = default;

    //! \brief Copy Constructor
    MessageRouter(const MessageRouter &original) = default;

    //! \brief Move Constructor
    // MessageRouter(const MessageRouter &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageRouter(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // MessageRouter(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	void Register(MessageProducerEndpoint endpoint);
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