#pragma once

#pragma region Library Includes
#include <memory>
#include <unordered_map>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
template <typename TPayload>
struct Message;

class MessageProducerEndpoint;
class SubscriptionMap;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class MessageRouter 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // MessageRouter& operator= (const MessageRouter &original);

    //! \cond \brief Move assignment operator \endcond
    // MessageRouter& operator= (MessageRouter &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \brief SubscriptionMap Parameterized Constructor
    *
    * \param[in] subscriptionMap An object representing a mapping of topics to subscribing endpoint identifiers
    * */
    MessageRouter (std::unique_ptr<SubscriptionMap> &&subscriptionMap);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \cond \brief Default Constructor \endcond
    // MessageRouter(void) = default;

    //! \brief Copy Constructor
    MessageRouter(const MessageRouter &original) = default;

    //! \brief Move Constructor
    // MessageRouter(const MessageRouter &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageRouter(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \brief Private Default Constructor
    MessageRouter(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	// TODO Replace with entityId_t when added
	void Register(const std::shared_ptr<MessageProducerEndpoint> endpoint, unsigned long endpointId);

	template <typename TPayload>
	void Publish(const std::shared_ptr<const Message<TPayload>> message);
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
	// TODO Replace with entityId_t when added
	std::unordered_map<unsigned long, std::shared_ptr<MessageProducerEndpoint>> endpointMap;
	std::unique_ptr<SubscriptionMap> subscriptionMap;
#pragma endregion
};

#include "../Template/MessageRouter.tpp"