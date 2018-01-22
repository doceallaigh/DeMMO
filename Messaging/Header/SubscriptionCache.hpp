#pragma once

#pragma region Library Includes
#include <memory>
#include <string>
#include <vector>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class SubscriptionCache 
{
public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // SubscriptionCache& operator= (const SubscriptionCache &original);

    //! \cond \brief Move assignment operator \endcond
    // SubscriptionCache& operator= (SubscriptionCache &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // SubscriptionCache (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    SubscriptionCache(void) = default;

    //! \brief Copy Constructor
    SubscriptionCache(const SubscriptionCache &original) = default;

    //! \brief Move Constructor
    //SubscriptionCache(const SubscriptionCache &&original) noexcept = default;

    //! \brief Destructor
    virtual ~SubscriptionCache(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // SubscriptionCache(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	void Subscribe(const std::string topic);

	std::unique_ptr<std::vector<const std::string>> GetTopics(void) const;
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
	std::vector<const std::string> topics;
#pragma endregion
};