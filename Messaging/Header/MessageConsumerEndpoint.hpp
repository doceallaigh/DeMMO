#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
template <typename TPayload>
struct Message;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Serves to obfuscate the production end of the MessageQueue from the message consumer
*
* \remarks Allows the consumer to:
*     1. Lazily retrieve Messages from the queue/producer
* */
class MessageConsumerEndpoint 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // MessageConsumerEndpoint& operator= (const MessageConsumerEndpoint &original);

    //! \cond \brief Move assignment operator \endcond
    // MessageConsumerEndpoint& operator= (MessageConsumerEndpoint &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // MessageConsumerEndpoint (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    MessageConsumerEndpoint(void) = default;

    //! \brief Copy Constructor
    MessageConsumerEndpoint(const MessageConsumerEndpoint &original) = default;

    //! \brief Move Constructor
    // MessageConsumerEndpoint(const MessageConsumerEndpoint &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageConsumerEndpoint(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // MessageConsumerEndpoint(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	template <typename TPayload>
	const std::shared_ptr<const Message<TPayload>> ReceiveMessage(void);
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