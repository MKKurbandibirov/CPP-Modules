#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(){
    this->name = "Undefined";
    this->damage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Empty ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap( const std::string & name ) : ClapTrap( name ) {
    this->name = name;
    this->damage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& another) {
    this->name = another.name;
    this->damage = another.damage;
    this->energyPoints = another.energyPoints;
    this->hitPoints = another.hitPoints;
    std::cout << "ScavTrap " << this->name << " copied!" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap& another ) {
    if (this == &another)
        return *this;
    this->name = another.name;
    this->damage = another.damage;
    this->energyPoints = another.energyPoints;
    this->hitPoints = another.hitPoints;
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->name << " died!" << std::endl;
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl; 
}

void    ScavTrap::attack( const std::string& name ) {
    if (this->energyPoints != 0) {
        std::cout << "ScavTrap " << this->name << " attacks " << name << ", causing " << this->damage << " points of damage!" << std::endl;
        this->energyPoints--;
        return;
    }
    std::cout << "ScavTrap " << this->name << " has no any enrgy for it!" << std::endl;
}

std::string ScavTrap::getName( void ) const {
    return this->name;
}

void ScavTrap::setName( const std::string& name ) {
    this->name = name;
}

int ScavTrap::getEP( void ) const {
    return this->energyPoints;
}

void ScavTrap::setEP( const int ep ) {
    this->energyPoints = ep;
}

int ScavTrap::getHP( void ) const {
    return this->hitPoints;
}

void ScavTrap::setHP( const int hp ) {
    this->hitPoints = hp;
}

int ScavTrap::getDamage( void ) const {
    return this->damage;
}

void ScavTrap::setDamage( const int damage ) {
    this->damage = damage;
}
