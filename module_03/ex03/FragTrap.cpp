#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
    this->name = "Undefined";
    this->damage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "Empty FragTrap created!" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name) {
    this->name = name;
    this->damage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& another ) {
    this->name = another.name;
    this->damage = another.damage;
    this->energyPoints = another.energyPoints;
    this->hitPoints = another.hitPoints;
    std::cout << "FragTrap " << this->name << " copied!" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap& another ) {
    if (this == &another)
        return *this;
    this->name = another.name;
    this->damage = another.damage;
    this->energyPoints = another.energyPoints;
    this->hitPoints = another.hitPoints;
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << this->name << " died!" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << this->name << " give me a five!" << std::endl;
}

std::string FragTrap::getName( void ) const {
    return this->name;
}

void FragTrap::setName( const std::string& name ) {
    this->name = name;
}

int FragTrap::getEP( void ) const {
    return this->energyPoints;
}

void FragTrap::setEP( const int ep ) {
    this->energyPoints = ep;
}

int FragTrap::getHP( void ) const {
    return this->hitPoints;
}

void FragTrap::setHP( const int hp ) {
    this->hitPoints = hp;
}

int FragTrap::getDamage( void ) const {
    return this->damage;
}

void FragTrap::setDamage( const int damage ) {
    this->damage = damage;
}
