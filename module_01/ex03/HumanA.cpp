#include "HumanA.hpp"

HumanA::~HumanA( void ) { std::cout << this->getName() << " deleted!" << std::endl; }

HumanA::HumanA( std::string name, Weapon &weapon ): weapon(weapon), name(name) {}

std::string HumanA::getName( void ) { return this->name; }

void HumanA::setName( std::string name ) { this->name = name; }

void HumanA::attack( void ) {
    std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl;
}
