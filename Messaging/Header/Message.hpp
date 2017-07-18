/* Message.hpp
 * Class description:
 *     This class acts as the basic implementation of the IMessage interface.
 *     For more information on the contract described by this interface, see IMessage.hpp
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessage.hpp"
#pragma endregion

#ifndef Message_hpp
#define Message_hpp
const class Message : public virtual IMessage
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // Message (void);

    // COPY CONSTRUCTOR
    // Message (const Message &original);

    // MOVE CONSTRUCTOR
    // Message (const Message &&original) noexcept;

    // DESTRUCTOR
    // ~Message (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // Message& operator= (const Message &original);

    // MOVE ASSIGNEMENT OPERATOR
    // Message& operator= (Message &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual const std::shared_ptr<const IMessageTopic> GetTopic (void) const override;

    virtual const messageId_t GetId (void) const override;
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
    // Message (void);
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
#endif // !Message_hpp