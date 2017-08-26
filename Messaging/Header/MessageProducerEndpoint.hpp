/* MessageProducerEndpoint.hpp
 * Class description:
 *     <MessageProducerEndpoint description goes here>
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageProducerEndpoint.hpp"
#pragma endregion

class IMessageConsumerEndpoint;

#ifndef MessageProducerEndpoint_hpp
#define MessageProducerEndpoint_hpp
class MessageProducerEndpoint : public virtual IMessageProducerEndpoint
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageProducerEndpoint (void);

    // COPY CONSTRUCTOR
    // MessageProducerEndpoint (const MessageProducerEndpoint &original);

    // MOVE CONSTRUCTOR
    // MessageProducerEndpoint (const MessageProducerEndpoint &&original) noexcept;

    // CUSTOM CONSTRUCTORS
    MessageProducerEndpoint(const std::shared_ptr<IMessageConsumerEndpoint> consumerEndpoint);

    // DESTRUCTOR
    // ~MessageProducerEndpoint (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageProducerEndpoint& operator= (const MessageProducerEndpoint &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageProducerEndpoint& operator= (MessageProducerEndpoint &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual void PublishMessage(const std::shared_ptr<const IMessage> message) override;
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
    // MessageProducerEndpoint (void);
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
#endif // !MessageProducerEndpoint_hpp