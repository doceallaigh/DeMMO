#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class IMessageConsumer;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 *
 * <Detailed description goes here>
 * */
class IMessageProducer
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageProducer(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual void AddConsumer(std::shared_ptr<IMessageConsumer> consumer) = 0;
#pragma endregion
};