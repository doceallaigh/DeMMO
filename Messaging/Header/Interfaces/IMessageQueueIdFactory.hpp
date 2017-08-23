#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
typedef unsigned long messageQueueId_t;
#pragma endregion

/*! \brief <Brief description goes here>
 *
 * <Detailed description goes here>
 * */
class IMessageQueueIdFactory 
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageQueueIdFactory(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual messageQueueId_t GenerateMessageQueueId(void) = 0;
#pragma endregion
};