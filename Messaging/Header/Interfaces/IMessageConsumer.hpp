#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class IMessagingConsumerEndpoint;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief An API to allow association with a consumer-side messaging endpoint
 * */
class IMessageConsumer
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageConsumer(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual void SetMessagingEndpoint(const std::shared_ptr<IMessagingConsumerEndpoint> endpoint) = 0;
#pragma endregion
};