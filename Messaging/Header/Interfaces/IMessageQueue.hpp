#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Defines a contract which facilitates and enforces message flow between production and consumption endpoints
 * 
 * \remarks This contract fulfills the following role:
 *     1. It connects two diametrically opposed messaging endpoints, acting as a passthrough for message flow
 *     2. By obfuscating these endpoints from their partner's holder, it enforces flow in a single direction
 * */
class IMessageQueue
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageQueue(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
#pragma endregion
};