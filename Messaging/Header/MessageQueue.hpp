/* MessageQueue.hpp
 * Class description:
 *     <MessageQueue description goes here>
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageQueue.hpp"
#pragma endregion

#ifndef MessageQueue_hpp
#define MessageQueue_hpp
class MessageQueue : public virtual IMessageQueue
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageQueue (void);

    // COPY CONSTRUCTOR
    // MessageQueue (const MessageQueue &original);

    // MOVE CONSTRUCTOR
    // MessageQueue (const MessageQueue &&original) noexcept;

    // DESTRUCTOR
    // ~MessageQueue (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageQueue& operator= (const MessageQueue &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageQueue& operator= (MessageQueue &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
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
    // MessageQueue (void);
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
#endif // !MessageQueue_hpp