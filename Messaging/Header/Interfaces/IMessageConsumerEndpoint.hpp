/* IMessageConsumerEndpoint.hpp
 * Interface description:
 *     This file describes the MessageConsumerEndpoint, which serves to obfuscate 
 *     the production end of the MessageQueue from the message consumer.
 *     This contract allows the consumer to:
 *         1. Lazily retrieve Messages from the queue/producer
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#ifndef IMessageConsumerEndpoint_hpp
#define IMessageConsumerEndpoint_hpp

#pragma region Forward Declarations
class IMessage;
#pragma endregion 

class IMessageConsumerEndpoint
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual const std::shared_ptr<const IMessage> ReceiveMessage (void) = 0;
#pragma endregion
};
#endif // !IMessageConsumerEndpoint_hpp