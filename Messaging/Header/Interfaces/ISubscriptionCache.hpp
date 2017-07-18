/* ISubscriptionCache.hpp
 * Interface description:
 *     This file describes the SubscriptionCache contract, which allows the storage and retrieval of MessageTopic subscriptions.
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <vector>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#ifndef ISubscriptionCache_hpp
#define ISubscriptionCache_hpp

#pragma region Forward Dclarations
class IMessageTopic;
#pragma endregion 

class ISubscriptionCache 
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual void AddSubscription (const IMessageTopic) = 0;

    virtual void RemoveSubscription (const IMessageTopic) = 0;

    virtual bool HasSubscription (const IMessageTopic) const = 0;

    virtual const std::vector<const IMessageTopic> GetSubscriptions (void) const = 0;
#pragma endregion
};
#endif // !ISubscriptionCache_hpp