/* MessageDependency.hpp
 * Class description:
 *     This class acts as the basic implementation of the IMessageDependency interface.
 *     For more information on the contract described by this interface, see IMessageDependency.hpp
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageDependency.hpp"
#pragma endregion

#ifndef MessageDependency_hpp
#define MessageDependency_hpp
class MessageDependency : public virtual IMessageDependency
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageDependency (void);

    // COPY CONSTRUCTOR
    // MessageDependency (const MessageDependency &original);

    // MOVE CONSTRUCTOR
    // MessageDependency (const MessageDependency &&original) noexcept;

    // DESTRUCTOR
    // ~MessageDependency (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageDependency& operator= (const MessageDependency &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageDependency& operator= (MessageDependency &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual bool IsSatisfied (void) const override;
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
    // MessageDependency (void);
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
#endif // !MessageDependency_hpp