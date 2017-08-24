#pragma once

#pragma region Library Includes
#include <memory>
#include <unordered_map>
#pragma endregion

#pragma region Local Includes
#include "Interfaces/IMessageConsumerEndpointFactory.hpp"
#include "Interfaces/IMessageProducerEndpointFactory.hpp"
#include "Interfaces/IMessageQueueIdFactory.hpp"
#pragma endregion

#pragma region Forward Declarations
class IMessageConsumerEndpoint;
class IMessageProducerEndpoint;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class MessageQueueFactory : public virtual IMessageQueueIdFactory, public virtual IMessageConsumerEndpointFactory, public virtual IMessageProducerEndpointFactory
{
public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // MessageQueueFactory& operator= (const MessageQueueFactory &original);

    //! \cond \brief Move assignment operator \endcond
    // MessageQueueFactory& operator= (MessageQueueFactory &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // MessageQueueFactory (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    MessageQueueFactory(void) = default;

    //! \brief Copy Constructor
    MessageQueueFactory(const MessageQueueFactory &original) = default;

    //! \cond \brief Move Constructor \endcond
    // MessageQueueFactory(const MessageQueueFactory &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageQueueFactory(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // MessageQueueFactory(void) = default;
#pragma endregion

public:
#pragma region Public Methods
    virtual messageQueueId_t GenerateMessageQueueId(void) override;

    virtual std::shared_ptr<IMessageConsumerEndpoint> GenerateConsumerEndpoint(messageQueueId_t messageQueueId) override;

    virtual std::shared_ptr<IMessageProducerEndpoint> GenerateProducerEndpoint(messageQueueId_t messageQueueId) override;
#pragma endregion

protected:
#pragma region Protected Methods
#pragma endregion

private:
#pragma region Private Methods
#pragma endregion

public:
#pragma region Public Fields
#pragma endregion

protected:
#pragma region Protected Fields
#pragma endregion

private:
#pragma region Private Fields
    messageQueueId_t currentMessageQueueId;

    std::unordered_map<messageQueueId_t, std::pair<std::shared_ptr<IMessageConsumerEndpoint>, std::shared_ptr<IMessageProducerEndpoint>>> messageQueueMap;
#pragma endregion
};