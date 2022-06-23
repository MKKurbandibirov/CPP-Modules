#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
    this->setName("Undefined");
    this->setDamage(0);
    this->setHP(0);
    this->setEP(0);
    std::cout << "Empty DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name") {
    this->setName(name);
    this->setDamage(FragTrap::getDamage());
    this->setEP(ScavTrap::getEP());
    this->setHP(FragTrap::getHP());
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& another ) {
    this->setName(another.getName());
    this->setDamage(another.getDamage());
    this->setEP(another.getEP());
    this->setHP(another.getHP());
    std::cout << "DiamondTrap " << this->getName() << " copied!" << std::endl;
}

DiamondTrap&   DiamondTrap::operator=( const DiamondTrap& another ) {
    if (this == &another)
        return *this;
    this->setName(another.getName());
    this->setDamage(another.getDamage());
    this->setEP(another.getEP());
    this->setHP(another.getHP());
    return *this;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap " << this->getName() << " died!" << std::endl;
}

void    DiamondTrap::attack( const std::string& name ) {
    ScavTrap::attack(name);
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "My name is " << this->getName() << " and my grandpa's name is " << ClapTrap::getName() << std::endl;
}