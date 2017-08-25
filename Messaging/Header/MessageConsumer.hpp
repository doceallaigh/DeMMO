/* MessageConsumer.hpp
 * Class description:
 *     <MessageConsumer description goes here>
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageConsumer.hpp"
#pragma endregion

#ifndef MessageConsumer_hpp
#define MessageConsumer_hpp
class MessageConsumer : public virtual IMessageConsumer
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageConsumer (void);

    // COPY CONSTRUCTOR
    // MessageConsumer (const MessageConsumer &original);

    // MOVE CONSTRUCTOR
    // MessageConsumer (const MessageConsumer &&original) noexcept;

    // DESTRUCTOR
    // ~MessageConsumer (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageConsumer& operator= (const MessageConsumer &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageConsumer& operator= (MessageConsumer &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual void SetMessagingEndpoint(const std::shared_ptr<IMessagingConsumerEndpoint> endpoint) override;
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
    // MessageConsumer (void);
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
#endif // !MessageConsumer_hpp