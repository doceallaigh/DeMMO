#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/MessageRouter.hpp"
#include "../Header/MessageProducerEndpoint.hpp"
#include "../Header/SubscriptionMap.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Static Fields
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
MessageRouter::MessageRouter(std::unique_ptr<SubscriptionMap> &&subscriptionMap) : subscriptionMap(std::move(subscriptionMap))
{
	this->endpointMap = std::unordered_map<unsigned long, std::shared_ptr<MessageProducerEndpoint>>();
}
#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
void MessageRouter::Register(const std::shared_ptr<MessageProducerEndpoint> endpoint, unsigned long endpointId)
{
	this->endpointMap[endpointId] = endpoint;
}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion