/* MessageTopic.hpp
 * Class description:
 *     This class acts as the basic implementation of the IMessageTopic interface.
 *     For more information on the contract described by this interface, see IMessageTopic.hpp
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageTopic.hpp"
#pragma endregion

#ifndef MessageTopic_hpp
#define MessageTopic_hpp
const class MessageTopic : public virtual IMessageTopic
{
public:
#pragma region Public Constructors & Destructor
    // DEFAULT CONSTRUCTOR
    // MessageTopic (void);

    // COPY CONSTRUCTOR
    // MessageTopic (const MessageTopic &original);

    // MOVE CONSTRUCTOR
    // MessageTopic (const MessageTopic &&original) noexcept;

    // DESTRUCTOR
    // ~MessageTopic (void) noexcept;
#pragma endregion

#pragma region Operators
    // COPY ASSIGNEMENT OPERATOR
    // MessageTopic& operator= (const MessageTopic &original);

    // MOVE ASSIGNEMENT OPERATOR
    // MessageTopic& operator= (MessageTopic &&original) noexcept;
#pragma endregion

#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    // VIRTUAL METHODS
    virtual messageTopicIdentifier_t GetId (void) const override;

    virtual std::vector<const std::shared_ptr<IMessageTopic>> GetSubTopics (void) const override;
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
    // MessageTopic (void);
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
#endif // !MessageTopic_hpp