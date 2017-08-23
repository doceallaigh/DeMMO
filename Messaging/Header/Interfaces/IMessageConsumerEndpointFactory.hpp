#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class IMessageConsumerEndpoint;
class messageQueueId_t;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Connects and 
 *
 * <Detailed description goes here>
 * */
class IMessageConsumerEndpointFactory 
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageConsumerEndpointFactory(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual std::unique_ptr<IMessageConsumerEndpoint> GenerateConsumerEndpoint(messageQueueId_t messageQueueId) = 0;
#pragma endregion
};