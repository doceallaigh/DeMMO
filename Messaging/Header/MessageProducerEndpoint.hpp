#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
template <typename TPayload>
struct Message;

class MessageConsumerEndpoint;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief \<Brief description goes here\>
 * 
 * \<Detailed description goes here\>
 * */
class MessageProducerEndpoint 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \brief Copy assignment operator
    // MessageProducerEndpoint& operator= (const MessageProducerEndpoint &original);

    //! \brief Move assignment operator
    // MessageProducerEndpoint& operator= (MessageProducerEndpoint &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! Consumer Endpoint Parameterized Constructor
    *
    * \param[in] consumerEndpoint The opposing messaging endpoint shared by the consumer which this class serves to obfuscate
    * */
    MessageProducerEndpoint (std::shared_ptr<MessageConsumerEndpoint> consumerEndpoint);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    // MessageProducerEndpoint(void) = default;

    //! \brief Copy Constructor
    MessageProducerEndpoint(const MessageProducerEndpoint &original) = default;

    //! \brief Move Constructor
    // MessageProducerEndpoint(const MessageProducerEndpoint &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageProducerEndpoint(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \brief Private Default Constructor
    MessageProducerEndpoint(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	template <typename TPayload>
	void PublishMessage(const std::shared_ptr<const Message<TPayload>> message);
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
	std::shared_ptr<MessageConsumerEndpoint> consumerEndpoint;
#pragma endregion
};

#include "../Template/MessageProducerEndpoint.tpp"