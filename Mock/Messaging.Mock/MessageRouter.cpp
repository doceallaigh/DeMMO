#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../../Messaging/Header/MessageRouter.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Static Fields
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
MessageRouter::MessageRouter(std::shared_ptr<SubscriptionMap> subscriptionMap) : subscriptionMap(subscriptionMap)
{

}
#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
void MessageRouter::Register(const std::shared_ptr<MessageProducerEndpoint> endpoint, unsigned long endpointId)
{

}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion