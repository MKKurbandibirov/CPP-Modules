#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    this->name = "Undefined";
    this->damage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "Empty ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) {
    this->name = name;
    this->damage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& another ) {
    this->name = another.name;
    std::cout << "ClapTrap " << this->name << " copied!" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& another ) {
    if (this == &another)
        return *this;
    this->name = another.name;
    return *this;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void    ClapTrap::attack( const std::string& name ) {
    if (this->energyPoints != 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << name << " , causing " << this->damage << " points of damage!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " has no any enrgy for it!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (this->energyPoints != 0) {
        std::cout << "ClapTrap " << this->name << " repaire " << amount << " points of health!" << std::endl;
        this->hitPoints += amount;
        return;
    }
    std::cout << "ClapTrap " << this->name << " has no any enrgy for it!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (this->hitPoints != 0) {
        std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
        this->hitPoints += amount;
        return;
    }
    std::cout << "ClapTrap " << this->name << " is already died!" << std::endl;
}

std::string ClapTrap::getName( void ) const {
    return this->name;
}

void ClapTrap::setName( const std::string& name ) {
    this->name = name;
}

int ClapTrap::getEP( void ) const {
    return this->energyPoints;
}

void ClapTrap::setEP( const int ep ) {
    this->energyPoints = ep;
}

int ClapTrap::getHP( void ) const {
    return this->hitPoints;
}

void ClapTrap::setHP( const int hp ) {
    this->hitPoints = hp;
}

int ClapTrap::getDamage( void ) const {
    return this->damage;
}

void ClapTrap::setDamage( const int damage ) {
    this->damage = damage;
}
