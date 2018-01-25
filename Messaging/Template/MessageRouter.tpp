#pragma once

template <typename TPayload>
void MessageRouter::Publish(const std::shared_ptr<const Message<TPayload>> message)
{
    std::vector<unsigned long> subscribedEndpointIds = this->subscriptionMap->GetSubscriberIds(message->Topic);
}