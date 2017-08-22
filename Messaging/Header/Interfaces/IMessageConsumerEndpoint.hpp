#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class IMessage;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Serves to obfuscate the production end of the MessageQueue from the message consumer
 *
 * \remarks Allows the consumer to: 
 *     1. Lazily retrieve Messages from the queue/producer
 * */
class IMessageConsumerEndpoint
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageConsumerEndpoint(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual const std::shared_ptr<const IMessage> ReceiveMessage(void) = 0;
#pragma endregion
};