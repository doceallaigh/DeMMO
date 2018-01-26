#pragma once

#include "../Header/SubscriptionMap.hpp"

template <typename TPayload>
void MessageBus::PublishMessage(const std::shared_ptr<const Message<TPayload>> message) const
{
    this->messageRouter->Publish(message);
}