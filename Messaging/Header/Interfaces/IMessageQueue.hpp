/* IMessageQueue.hpp
 * Interface description:
 *     This file defines the MessageQueue contract.
 *     The MessageQueue contract fulfills the following role:
 *         1. It connects two diametrically opposed messaging endpoints, acting as a passthrough for message flow
 *         2. By obfuscating these endpoints from their partner's holder, it enforces flow in a single direction
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#ifndef IMessageQueue_hpp
#define IMessageQueue_hpp

class IMessageQueue 
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
#pragma endregion
};
#endif // !IMessageQueue_hpp