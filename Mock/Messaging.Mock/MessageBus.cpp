// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../../Messaging/Header/MessageBus.hpp"
#include "../../Messaging/Header/MessageRouter.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
MessageBus::MessageBus(std::unique_ptr<MessageRouter> &&messageRouter, std::shared_ptr<SubscriptionMap> subscriptionMap)
{

}
#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
void MessageBus::AddConsumer(std::shared_ptr<MessageConsumer> consumer)
{

}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion