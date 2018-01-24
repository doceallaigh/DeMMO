#pragma once

#pragma region Library Includes
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
template <typename TPayload>
struct Message;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class MessageProducerEndpoint 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // MessageProducerEndpoint& operator= (const MessageProducerEndpoint &original);

    //! \cond \brief Move assignment operator \endcond
    // MessageProducerEndpoint& operator= (MessageProducerEndpoint &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // MessageProducerEndpoint (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    MessageProducerEndpoint(void) = default;

    //! \brief Copy Constructor
    MessageProducerEndpoint(const MessageProducerEndpoint &original) = default;

    //! \brief Move Constructor
    // MessageProducerEndpoint(const MessageProducerEndpoint &&original) noexcept = default;

    //! \brief Destructor
    virtual ~MessageProducerEndpoint(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // MessageProducerEndpoint(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	template <typename TPayload>
	void PublishMessage(const std::shared_ptr<const Message<TPayload>> message)
	{
		// TODO Implement
	}
#pragma endregion

protected:
#pragma region Protected Methods
#pragma endregion

private:
#pragma region Private Methods
#pragma endregion

public:
#pragma region Public Fields
#pragma endregion

protected:
#pragma region Protected Fields
#pragma endregion

private:
#pragma region Private Fields
#pragma endregion
};