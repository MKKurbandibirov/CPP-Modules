#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap() {
    this->setName("Undefined");
    this->setDamage(FragTrap::getDamage());
    this->setEP(ScavTrap::getEP());
    this->setHP(FragTrap::getHP());
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

std::string DiamondTrap::getName( void ) const {
    return this->name;
}

void DiamondTrap::setName( const std::string& name ) {
    this->name = name;
}

int DiamondTrap::getEP( void ) const {
    return this->energyPoints;
}

void DiamondTrap::setEP( const int ep ) {
    this->energyPoints = ep;
}

int DiamondTrap::getHP( void ) const {
    return this->hitPoints;
}

void DiamondTrap::setHP( const int hp ) {
    this->hitPoints = hp;
}

int DiamondTrap::getDamage( void ) const {
    return this->damage;
}

void DiamondTrap::setDamage( const int damage ) {
    this->damage = damage;
}