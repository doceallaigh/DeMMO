#pragma once

#pragma region Library Includes
#include <string>
#include <memory>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
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
class Message 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // Message& operator= (const Message &original);

    //! \cond \brief Move assignment operator \endcond
    // Message& operator= (Message &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // Message (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    Message(void) = default;

    //! \brief Copy Constructor
    Message(const Message &original) = default;

    //! \brief Move Constructor
    // Message(const Message &&original) noexcept = default;

    //! \brief Destructor
    virtual ~Message(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // Message(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	// TODO Consider making this class A POD
	const std::string GetTopic(void) const;

	const messageId_t GetId(void) const;
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