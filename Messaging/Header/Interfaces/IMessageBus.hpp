#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#include "IMessageProducer.hpp"
#pragma endregion

#pragma region Forward Declarations
class IMessage;
class IMessageConsumer;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Defines a contract which allows messages to be published and routed to subscribing modules
 * 
 * \remarks Promise(s)
 *     1. Messages sent to this module are routed to all modules subscribing to that message's topic
 * */
class IMessageBus : public virtual IMessageProducer
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageBus(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual void PublishMessage(const std::shared_ptr<const IMessage> message) = 0;

    virtual void AddConsumer(std::shared_ptr<IMessageConsumer> consumer) override = 0;
#pragma endregion
};