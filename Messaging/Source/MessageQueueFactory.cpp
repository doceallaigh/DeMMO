// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/MessageConsumerEndpoint.hpp"
#include "../Header/MessageProducerEndpoint.hpp"
#include "../Header/MessageQueueFactory.hpp"
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
messageQueueId_t MessageQueueFactory::GenerateMessageQueueId(void)
{
    std::shared_ptr<IMessageConsumerEndpoint> consumerEndPoint = std::make_unique<MessageConsumerEndpoint>();
    std::shared_ptr<IMessageProducerEndpoint> producerEndPoint = std::make_unique<MessageProducerEndpoint>(consumerEndPoint);

    this->messageQueueMap[this->currentMessageQueueId] = std::make_pair(consumerEndPoint, producerEndPoint);

    return this->currentMessageQueueId++;
}

std::shared_ptr<IMessageConsumerEndpoint> MessageQueueFactory::GenerateConsumerEndpoint(messageQueueId_t messageQueueId)
{
    return std::move(this->messageQueueMap.at(messageQueueId).first);
}

std::shared_ptr<IMessageProducerEndpoint> MessageQueueFactory::GenerateProducerEndpoint(messageQueueId_t messageQueueId)
{
    return std::move(this->messageQueueMap.at(messageQueueId).second);
}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion