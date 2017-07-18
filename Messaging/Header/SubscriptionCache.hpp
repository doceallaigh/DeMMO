/* SubscriptionCache.hpp
 * Class description:
 *     This class acts as the basic implementation of the ISubscriptionCache interface.
 *     For more information on the contract described by this interface, see ISubscriptionCache.hpp
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/ISubscriptionCache.hpp"
#pragma endregion

#ifndef SubscriptionCache_hpp
#define SubscriptionCache_hpp
class SubscriptionCache : public virtual ISubscriptionCache
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // SubscriptionCache (void);

    // COPY CONSTRUCTOR
    // SubscriptionCache (const SubscriptionCache &original);

    // MOVE CONSTRUCTOR
    // SubscriptionCache (const SubscriptionCache &&original) noexcept;

    // DESTRUCTOR
    // ~SubscriptionCache (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // SubscriptionCache& operator= (const SubscriptionCache &original);

    // MOVE ASSIGNEMENT OPERATOR
    // SubscriptionCache& operator= (SubscriptionCache &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual void AddSubscription (const IMessageTopic) override;

    virtual void RemoveSubscription (const IMessageTopic) override;

    virtual bool HasSubscription (const IMessageTopic) const override;

    virtual const std::vector<const IMessageTopic> GetSubscriptions (void) const override;
#pragma endregion

#pragma region Public Non-virtual Methods
    // NON-VOID METHODS
    // VOID METHODS
#pragma endregion

#pragma region Public Fields
    // SERVICES
    // COLLECTIONS
    // OBJECTS
    // PRIMITIVES
#pragma endregion

protected:
#pragma region Protected Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
#pragma endregion

#pragma region Protected Non-virtual Methods
    // NON-VOID METHODS
    // VOID METHODS
#pragma endregion

#pragma region Protected Fields
    // SERVICES
    // COLLECTIONS
    // OBJECTS
    // PRIMITIVES
#pragma endregion

private:
#pragma region Private Constructors
    // DEFAULT CONSTRUCTOR
    // SubscriptionCache (void);
#pragma endregion

#pragma region Private Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
#pragma endregion

#pragma region Private Non-virtual Methods
    // NON-VOID METHODS
    // VOID METHODS
#pragma endregion

#pragma region Private Fields
    // SERVICES
    // COLLECTIONS
    // OBJECTS
    // PRIMITIVES
#pragma endregion
};
#endif // !SubscriptionCache_hpp