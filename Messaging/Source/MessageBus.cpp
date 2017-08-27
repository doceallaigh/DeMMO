// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/Interfaces/IMessage.hpp"
#include "../Header/Interfaces/IMessageConsumer.hpp"
#include "../Header/Interfaces/IMessageProducerEndpoint.hpp"
#include "../Header/Interfaces/ISubscriptionCache.hpp"
#include "../Header/MessageBus.hpp"
#include "../Header/MessageQueueFactory.hpp"
#include "../Header/SubscriptionCache.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
MessageBus::MessageBus(std::unordered_map<const messageQueueId_t, std::shared_ptr<ISubscriptionCache>> subscriptionCacheMap)
    : subscriptionCacheMap(subscriptionCacheMap)
{ }

#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
void MessageBus::PublishMessage(const std::shared_ptr<const IMessage> message)
{
    for (const auto& kvp : this->subscriptionCacheMap)
    {
        const messageQueueId_t& messageQueueId = kvp.first;
        const std::shared_ptr<ISubscriptionCache>& subscriptionCache = kvp.second;

        if (subscriptionCache->HasSubscription(*(message->GetTopic())))
        {
            this->queueMap[messageQueueId]->PublishMessage(message);
        }
    }
}

void MessageBus::AddConsumer(std::shared_ptr<IMessageConsumer> consumer)
{
    // TODO Take this in instead of constructing it on the fly
    MessageQueueFactory messageQueueFactory = MessageQueueFactory();

    messageQueueId_t queueId = messageQueueFactory.GenerateMessageQueueId();
    consumer->SetMessagingEndpoint(messageQueueFactory.GenerateConsumerEndpoint(queueId));
    this->queueMap[queueId] = messageQueueFactory.GenerateProducerEndpoint(queueId);
    this->subscriptionCacheMap[queueId] = std::make_shared<SubscriptionCache>();
}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion