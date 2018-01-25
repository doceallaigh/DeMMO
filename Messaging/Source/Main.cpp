#include "../Header/MessageRouter.hpp"
#include "../Header/SubscriptionMap.hpp"
#include "../Header/Message.hpp"

int main(int numArgs, char * args[])
{
	MessageRouter messageRouter(std::make_unique<SubscriptionMap>());
	messageRouter.Publish(std::make_shared<Message<int>>(Message<int>()));
}
