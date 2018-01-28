// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/MessageBus.hpp"
#include "../Header/Message.hpp"
#include "../Header/MessageConsumer.hpp"
#include "../Header/MessageConsumerEndpoint.hpp"
#include "../Header/MessageProducerEndpoint.hpp"
#include "../Header/MessageRouter.hpp"
#include "../Header/SubscriptionCache.hpp"
#include "../Header/SubscriptionMap.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
MessageBus::MessageBus(std::unique_ptr<MessageRouter> &&messageRouter, std::shared_ptr<SubscriptionMap> subscriptionMap) 
	: messageRouter(std::move(messageRouter)), subscriptionMap(subscriptionMap)
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
	// Create the pipe
	std::shared_ptr<MessageConsumerEndpoint> consumerEndpoint = std::make_shared<MessageConsumerEndpoint>();
	std::shared_ptr<MessageProducerEndpoint> producerEndpoint = std::make_shared<MessageProducerEndpoint>(consumerEndpoint);

	// Create the shared cache
	std::shared_ptr<SubscriptionCache> subscriptionCache = std::make_shared<SubscriptionCache>();

	// Create a message containing the cache to share
	Message<SubscriptionCache> subscriptionCacheMessage = Message<SubscriptionCache>();
	subscriptionCacheMessage.Topic = "ConsumerInitialization";
	// TODO Replace 1U with properly generated entity ID
	subscriptionCacheMessage.Id = 1U;
	subscriptionCacheMessage.Payload = subscriptionCache;

	// TODO Replace 2U with properly generated entity ID
	unsigned long endpointId = 2U;

	// Set up the router with the shared cache
	this->subscriptionMap->TrackSubscriptions(subscriptionCache, endpointId);
	this->messageRouter->Register(producerEndpoint, endpointId);

	// Send the cache to the consumer
	producerEndpoint->PublishMessage(std::make_shared<const Message<SubscriptionCache>>(subscriptionCacheMessage));
}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion