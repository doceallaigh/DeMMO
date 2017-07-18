/* IMessageDependency.hpp
 * Interface description:
 *     This file describes the MessageDependency contract.
 *     The MessageDependency contract exists to allow the consumer to process messages in a semi-arbitrary 
 *     (restricted only by the constraint that all dependencies are satisfied) order.
 *     This is of particular benefit when processing messages in priority order, rather than strict FIFO.
 *     Implementations should have their own (programatic) dependencies injected upon creation.
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#ifndef IMessageDependency_hpp
#define IMessageDependency_hpp
class IMessageDependency 
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual bool IsSatisfied (void) const = 0;
#pragma endregion
};
#endif // !IMessageDependency_hpp