/* MessageBus.hpp
 * Class description:
 *     This class acts as the basic implementation of the IMessageBus interface.
 *     For more information on the contract described by this interface, see IMessageBus.hpp
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <unordered_map>
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageBus.hpp"
#pragma endregion

class ISubscriptionCache;
class IMessageProducerEndpoint;
typedef unsigned long messageQueueId_t;

#ifndef MessageBus_hpp
#define MessageBus_hpp
class MessageBus : public virtual IMessageBus
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageBus (void);

    // COPY CONSTRUCTOR
    // MessageBus (const MessageBus &original);

    // CUSTOM CONSTRUCTORS
    MessageBus(std::unordered_map<const messageQueueId_t, std::shared_ptr<ISubscriptionCache>> subscriptionCacheMap);

    // MOVE CONSTRUCTOR
    // MessageBus (const MessageBus &&original) noexcept;

    // DESTRUCTOR
    // ~MessageBus (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageBus& operator= (const MessageBus &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageBus& operator= (MessageBus &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual void PublishMessage(const std::shared_ptr<const IMessage> message) override;

    virtual void AddConsumer(std::shared_ptr<IMessageConsumer> consumer) override;
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
    // MessageBus (void);
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
    std::unordered_map<const messageQueueId_t, std::shared_ptr<ISubscriptionCache>> subscriptionCacheMap;
    // COLLECTIONS
    std::unordered_map<const messageQueueId_t, std::shared_ptr<IMessageProducerEndpoint>> queueMap;
    // OBJECTS
    // PRIMITIVES
#pragma endregion
};
#endif // !MessageBus_hpp