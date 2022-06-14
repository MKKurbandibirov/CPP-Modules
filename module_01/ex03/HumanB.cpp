#include "HumanB.hpp"

HumanB::~HumanB( void ) { std::cout << this->getName() << " deleted!" << std::endl; }

HumanB::HumanB( std::string name ): weapon(NULL), name(name) {}

HumanB::HumanB( std::string name, Weapon &weapon ): weapon(&weapon), name(name) {}

std::string HumanB::getName( void ) { return this->name; }

void    HumanB::setName( std::string name ) { this->name = name; }

Weapon  HumanB::getWeapon( void ) { return *this->weapon; }

void    HumanB::setWeapon( Weapon &weapon ) { this->weapon = &weapon; }

void HumanB::attack( void ) {
    std::cout << this->getName() << " attacks with their " << (*this->weapon).getType() << std::endl;
}