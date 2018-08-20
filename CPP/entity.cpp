#include "entity.h"

Entity::Entity(char* entityName, Node entityLocation, std::list<Effect> startingEffects)
{
	name = entityName;
	location = entityLocation;
	effects = startingEffects;
}

UnitClass::UnitClass(char* uName, EntityType uType, std::list<Effect> uPassiveEffects, std::list<ActiveAbility> uAbilities, Attributes attr)
{
	name = uName;
	type = uType;
	passiveEffects = uPassiveEffects;
	abilities = uAbilities;
	attributes = attr;
}

MovableEntity::MovableEntity(char* name, Node location, std::list<Effect> startingEffects, Movement move, Size size, int power, UnitClass& uClass, std::list <ActiveAbility> abilities, bool bIsHidden) : Entity(name, location, startingEffects)
{

}

std::list<ActiveAbility> warriorAbilities;
std::list<Effect> warriorEffects;
Attributes warriorAttributes;

UnitClass Warrior = UnitClass("Warrior", Military, warriorEffects, warriorAbilities, warriorAttributes);