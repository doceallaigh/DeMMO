/* IMessageTopic.hpp
 * Interface description:
 *     This file describes the basic unit by which messages are routed, the MessageTopic.
 *     The MessageTopic is effectively a chained identifier which dictates where a message should be sent.
 *     MessageTopics consist of a partial identifier, and a collection of subtopics.
 *     MessageTopics are immutable.
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <string>
#include <vector>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#ifndef IMessageTopic_hpp
#define IMessageTopic_hpp

typedef std::string messageTopicIdentifier_t;

const class IMessageTopic 
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual messageTopicIdentifier_t GetId (void) const = 0;

    virtual std::vector<const std::shared_ptr<IMessageTopic>> GetSubTopics (void) const = 0;
#pragma endregion
};
#endif // !IMessageTopic_hpp