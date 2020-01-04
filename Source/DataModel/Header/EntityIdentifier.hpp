#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
typedef typename unsigned int entityId_t;
#pragma endregion

/*! \brief A strongly typed wrapper object signifying an entity ID
* */
typedef struct EntityIdentifier
{
public:
	EntityIdentifier(const entityId_t& id);

private:
	entityId_t id;
} EntityIdentifier;