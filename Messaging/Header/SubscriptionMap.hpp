#pragma once

#pragma region Library Includes
#include <memory>
#include <string>
#include <vector>
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
class SubscriptionCache;
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class SubscriptionMap 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // SubscriptionMap& operator= (const SubscriptionMap &original);

    //! \cond \brief Move assignment operator \endcond
    // SubscriptionMap& operator= (SubscriptionMap &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // SubscriptionMap (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    SubscriptionMap(void) = default;

    //! \brief Copy Constructor
    SubscriptionMap(const SubscriptionMap &original) = default;

    //! \brief Move Constructor
    // SubscriptionMap(const SubscriptionMap &&original) noexcept = default;

    //! \brief Destructor
    virtual ~SubscriptionMap(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // SubscriptionMap(void) = default;
#pragma endregion

public:
#pragma region Public Methods
	// TODO Replace with entityId_t when added
	void TrackSubscriptions(std::shared_ptr<SubscriptionCache> &subscriptionCache, unsigned long subscriberId);

	// TODO Replace with entityId_t when added
	std::vector<unsigned long> GetSubscriberIds(std::string topic);
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