/* IMessage.hpp
 * Interface description:
 *     This API describes the basic unit by which modules trigger work for each other.
 *     This contract promises the following about its implementations:
 *         1. The implementation provides access to an unchanging topic, which allows it to be used by the MessageBus to route it to its destination(s)
 *         2. The implementation provides access to an unchanging identifier.  This identifier is presumed to be unique, but this is not programatically enforced.
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#include "IMessageTopic.hpp"
#pragma endregion

#ifndef IMessage_hpp
#define IMessage_hpp
typedef unsigned int messageId_t;

const class IMessage
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual const std::shared_ptr<const IMessageTopic> GetTopic(void) const = 0;

    virtual const messageId_t GetId (void) const = 0;
#pragma endregion
};
#endif // !IMessage_hpp