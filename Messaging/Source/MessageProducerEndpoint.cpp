#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/MessageProducerEndpoint.hpp"
#include "../Header/MessageConsumerEndpoint.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Static Fields
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
MessageProducerEndpoint::MessageProducerEndpoint(std::shared_ptr<MessageConsumerEndpoint> consumerEndpoint) : consumerEndpoint(consumerEndpoint)
{ }
#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion