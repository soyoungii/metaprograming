#include "Item.h"

Item::Item(const std::string& name, const std::string& type, int attack, int defense)
	:name(name), type(type), attack(attack), defense(defense), equipped(false)

{
}
