#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 *
 * <Detailed description goes here>
 * */
class IMessageProducerEndpoint
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageProducerEndpoint(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual void PublishMessage(const std::shared_ptr<const IMessage> message) = 0;
#pragma endregion
};