/* IMessage.hpp
 * Interface description:
 *     This API describes the basic unit by which modules trigger work for each other.
 *     This contract promises the following:
 *         1. Data held within the context of this contract are immutable
 *         2. The consumer of this data is responsible for acting on it (the message itself cannot explicitly the work to be done)
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <memory>
#include <string>
#pragma endregion

#pragma region Local Includes
#include "IMessageTopic.hpp"
#pragma endregion

#ifndef IMessage_hpp
#define IMessage_hpp
const class IMessage
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual const std::shared_ptr<const IMessageTopic&>& GetTopic(void) const = 0;

    virtual const std::string& GetData (void) const = 0;
#pragma endregion
};
#endif // !IMessage_hpp