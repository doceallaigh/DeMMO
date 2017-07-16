/* IMessageConsumerEndpoint.hpp
 * Interface description:
 *     This file describes the MessageConsumerEndpoint, which serves to obfuscate 
 *     the production end of the MessageQueue from the message consumer.
 *     This contract allows the consumer to:
 *         1. Lazily retrieve Messages from the queue/producer
 *         2. Subscribe to and unsubscribe from MessageTopics dynamically
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion
#include "IMessage.hpp"

#ifndef IMessageConsumerEndpoint_hpp
#define IMessageConsumerEndpoint_hpp
class IMessageConsumerEndpoint
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual const shared_ptr<const IMessage&>
#pragma endregion
};
#endif // !IMessageConsumerEndpoint_hpp