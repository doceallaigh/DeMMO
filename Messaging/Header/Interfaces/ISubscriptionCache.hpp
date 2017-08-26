#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include <vector>
#pragma endregion

#pragma region Forward Declarations
class IMessageTopic;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Defines a contract which allows the storage and retrieval of MessageTopic subscriptions
 * */
class ISubscriptionCache
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~ISubscriptionCache(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual void AddSubscription(const IMessageTopic&) = 0;

    virtual void RemoveSubscription(const IMessageTopic&) = 0;

    virtual bool HasSubscription(const IMessageTopic&) const = 0;

    virtual const std::vector<const IMessageTopic> GetSubscriptions(void) const = 0;
#pragma endregion
};