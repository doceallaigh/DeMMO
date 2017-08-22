#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class IMessageTopic;
#pragma endregion

#pragma region Type Definitions
typedef unsigned long messageId_t;
#pragma endregion

/*! \brief Describes the basic unit by which modules trigger work for each other
 * 
 * \remarks Promise(s):
 *     1. The implementation provides access to an unchanging topic, which allows it to be used by the MessageBus to route it to its destination(s)
 *     2. The implementation provides access to an unchanging identifier.  This identifier is presumed to be unique, but this is not programatically enforced.
 * */
const class IMessage
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessage(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual const std::shared_ptr<const IMessageTopic> GetTopic(void) const = 0;

    virtual const messageId_t GetId(void) const = 0;
#pragma endregion
};