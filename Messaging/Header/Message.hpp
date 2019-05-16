#pragma once

#pragma region Library Includes
#include <memory>
#include <string>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
typedef typename unsigned long messageId_t;
#pragma endregion

/*! \brief Describes the basic unit by which modules trigger work for each other
* */
template <typename TPayload>
struct Message
{
public:
	//! \brief The message topic, used for the purposes of routing and filtering
	std::string Topic;

	//! \brief The message ID, intended to be a unique identifier among message objects
	messageId_t Id;

	//! \brief The message payload, which allows the consumer to act on the message
	std::shared_ptr<const TPayload> Payload;
};