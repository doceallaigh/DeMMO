#pragma once

#pragma region Library Includes
#include <vector>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
typedef std::string messageTopicIdentifier_t;
#pragma endregion

/*! \brief Defines the basic unit by which messages are routed
 *
 * \remarks The MessageTopic is effectively a chained identifier which dictates where a message should be sent.
 * MessageTopics consist of a partial identifier, and a collection of subtopics.
 * MessageTopics are immutable.
 * */
const class IMessageTopic
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageTopic(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual messageTopicIdentifier_t GetId(void) const = 0;

    virtual std::vector<const std::shared_ptr<IMessageTopic>> GetSubTopics(void) const = 0;
#pragma endregion
};