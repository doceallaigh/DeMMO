#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class IMessageProducerEndpoint;
class messageQueueId_t;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 *
 * <Detailed description goes here>
 * */
class IMessageProducerEndpointFactory 
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageProducerEndpointFactory(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual std::unique_ptr<IMessageProducerEndpoint> GenerateProducerEndpoint(messageQueueId_t messageQueueId) = 0;
#pragma endregion
};