/* IMessageProducer.hpp
 * Interface description:
 *     <IMessageProducer description goes here>
 * * */

#pragma once

// INCLUDES
#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#ifndef IMessageProducer_hpp
#define IMessageProducer_hpp

#pragma region Forward Declarations
class IMessageConsumer;
#pragma endregion

class IMessageProducer 
{
public:
#pragma region Public Virtual Methods
    // PURE VIRTUAL METHODS
    virtual void AddConsumer (std::shared_ptr<IMessageConsumer> consumer) = 0;
#pragma endregion
};
#endif // !IMessageProducer_hpp