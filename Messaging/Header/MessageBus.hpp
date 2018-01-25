#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
template <typename TPayload>
struct Message;

class MessageConsumer;
class MessageRouter;
class SubscriptionMap;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Defines a contract which allows messages to be published and routed to subscribing modules
*
* \remarks Promise(s)
*     1. Messages sent to this module are routed to all modules subscribing to that message's topic
* */
class MessageBus 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // MessageBus& operator= (const MessageBus &original);

    //! \cond \brief Move assignment operator \endcond
    // MessageBus& operator= (MessageBus &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // MessageBus (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    MessageBus(void) = default;

    //! \brief Copy Constructor
    MessageBus(const MessageBus &original) = default;

    //! \brief Move Constructor
    // MessageBus(const MessageBus &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageBus(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // MessageBus(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	void AddConsumer(std::shared_ptr<MessageConsumer> consumer);

	template <typename TPayload>
	void PublishMessage(const std::shared_ptr<const Message<TPayload>> message) const;
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
	std::unique_ptr<MessageRouter> messageRouter;
	std::unique_ptr<SubscriptionMap> subscriptionMap;
#pragma endregion
};