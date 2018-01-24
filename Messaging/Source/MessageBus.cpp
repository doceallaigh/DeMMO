// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/Message.hpp"
#include "../Header/MessageConsumer.hpp"
#include "../Header/MessageProducerEndpoint.hpp"
#include "../Header/SubscriptionCache.hpp"
#include "../Header/MessageBus.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
void MessageBus::PublishMessage(const std::shared_ptr<const Message> message)
{
	// TODO Implement
}

void MessageBus::AddConsumer(std::shared_ptr<MessageConsumer> consumer)
{
	// TODO Implement
}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion