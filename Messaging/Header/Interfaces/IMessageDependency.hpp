#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief Defines a contract which allows the consumer to query whether or not a message is ready for processing
 * 
 * \remarks This API allows the consumer to process messages in a semi-arbitrary
 * (restricted only by the constraint that all dependencies are satisfied) order.
 * This is of particular benefit when processing messages in priority order, rather than strict FIFO.
 * Implementations should have their own (programatic) dependencies injected upon creation.
 * */
class IMessageDependency
{
public:
#pragma region Destructor
    //! \cond Default Destructor
    virtual ~IMessageDependency(void) = default;
    //! \endcond
#pragma endregion

#pragma region Public Methods
    virtual bool IsSatisfied(void) const = 0;
#pragma endregion
};