/* IMessageQueue.hpp
 * Interface description:
 *     This file defines the MessageQueue contract.
 *     The MessageQueue contract fulfills the following role:
 *         1. It connects two diametrically opposed messaging endpoints, acting as a passthrough for message flow
 *         2. By obfuscating these endpoints from their partner's holder, it enforces flow in a single direction
 *         3. It manages subscriptions, accessible via either endpoint, so that:
 *             3a. The consumer endpoint may subcribe to a topic
 *             3b. The producer endpoint may check the queues subscriptions
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "IMessageConsumerEndpoint.hpp"
#include "IMessageProducerEndpoint.hpp"
#include "IMessageTopic.hpp"
#pragma endregion

#ifndef IMessageQueue_hpp
#define IMessageQueue_hpp

class IMessageQueue 
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual void SubscribeToTopic (const IMessageConsumerEndpoint& validatorEndPoint, const IMessageTopic&& topic) = 0;

    virtual bool IsSubscribedToTopic (const IMessageProducerEndpoint& validatorEndPoint, const IMessageTopic&& topic) const = 0;
#pragma endregion
};
#endif // !IMessageQueue_hpp