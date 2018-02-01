#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>

#include "../../Messaging/Source/MessageBus.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void SubscriptionMap::TrackSubscriptions(std::shared_ptr<SubscriptionCache> &subscriptionCache, unsigned long subscriberId)
{
	std::cout << "Test" << std::endl;
}

MessageProducerEndpoint::MessageProducerEndpoint(std::shared_ptr<MessageConsumerEndpoint> consumerEndpoint)
{
	
}

MessageRouter::MessageRouter(std::shared_ptr<SubscriptionMap> subscriptionMap)
{
	
}

void MessageRouter::Register(const std::shared_ptr<MessageProducerEndpoint> endpoint, unsigned long endpointId)
{
	
}

namespace Test
{
	TEST_CLASS(MessageBusTest)
	{
	public:

		TEST_METHOD(MessageBusTest_Constructor_ShouldExitNormally_WhenDependenciesAreProvided)
		{
			std::shared_ptr<SubscriptionMap> subscriptionMap = std::make_shared<SubscriptionMap>();
			std::unique_ptr<MessageRouter> messageRouter = std::make_unique<MessageRouter>(subscriptionMap);
			
			MessageBus targetMessageBus(std::move(messageRouter), subscriptionMap);
		}

	};
}