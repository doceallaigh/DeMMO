/* IMessageBus.hpp
 * Interface description:
 *     This file defines the MessageBus contract, which allows messages to be published and routed to subscribing modules.
 *     This contract promises the following:
 *         1. Messages sent to this module are routed to all modules subscribing to that message's topic
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "IMessage.hpp"
#include "IMessageProducer.hpp"
#pragma endregion

#ifndef IMessageBus_hpp
#define IMessageBus_hpp
class IMessageBus : public virtual IMessageProducer
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // TODO_HIGH A decision must be made here
    virtual void PublishMessage (const std::shared_ptr<const IMessage> message) = 0;
#pragma endregion
};
#endif // !IMessageBus_hpp