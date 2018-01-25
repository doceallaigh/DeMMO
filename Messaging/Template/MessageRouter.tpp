#pragma once

template <typename TPayload>
void MessageRouter::Publish(std::shared_ptr<Message<TPayload>> message)
{
    std::vector<unsigned long> subscribedEndpointIds = this->subscriptionMap->GetSubscriberIds(message->Topic);
}