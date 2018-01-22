// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#include "../Header/SubscriptionCache.hpp"
#pragma endregion

#pragma region Constants
#pragma endregion

#pragma region Operators
#pragma endregion

#pragma region Custom Constructors
#pragma endregion

#pragma region Standard Constructors & Destructor
#pragma endregion

#pragma region Private Constructors
#pragma endregion

#pragma region Public Methods
void SubscriptionCache::Subscribe(const std::string topic)
{
	this->topics.push_back(topic);
}

std::unique_ptr<std::vector<const std::string>> SubscriptionCache::GetTopics(void) const
{
	return std::make_unique<std::vector<const std::string>>(std::vector<const std::string>(this->topics));
}
#pragma endregion

#pragma region Protected Methods
#pragma endregion

#pragma region Private Methods
#pragma endregion