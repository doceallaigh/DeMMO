/* MessageConsumerEndpoint.hpp
 * Class description:
 *     This class acts as the basic implementation of the IMessageConsumerEndpoint interface.
 *     For more information on the contract described by this interface, see IMessageConsumerEndpoint.hpp
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageConsumerEndpoint.hpp"
#pragma endregion

#ifndef MessageConsumerEndpoint_hpp
#define MessageConsumerEndpoint_hpp
class MessageConsumerEndpoint : public virtual IMessageConsumerEndpoint
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageConsumerEndpoint (void);

    // COPY CONSTRUCTOR
    // MessageConsumerEndpoint (const MessageConsumerEndpoint &original);

    // MOVE CONSTRUCTOR
    // MessageConsumerEndpoint (const MessageConsumerEndpoint &&original) noexcept;

    // DESTRUCTOR
    // ~MessageConsumerEndpoint (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageConsumerEndpoint& operator= (const MessageConsumerEndpoint &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageConsumerEndpoint& operator= (MessageConsumerEndpoint &&original) noexcept;
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
    // MessageConsumerEndpoint (void);
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
#endif // !MessageConsumerEndpoint_hpp