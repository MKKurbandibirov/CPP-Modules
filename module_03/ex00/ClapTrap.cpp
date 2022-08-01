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
    this->damage = another.damage;
    this->energyPoints = another.energyPoints;
    this->hitPoints = another.hitPoints;
    std::cout << "ClapTrap " << this->name << " copied!" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& another ) {
    if (this == &another)
        return *this;
    this->name = another.name;
    this->damage = another.damage;
    this->energyPoints = another.energyPoints;
    this->hitPoints = another.hitPoints;
    return *this;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void    ClapTrap::attack( const std::string& name ) {
    if (this->energyPoints != 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << name << ", causing " << this->damage << " points of damage!" << std::endl;
        this->energyPoints--;
        return;
    }
    std::cout << "ClapTrap " << this->name << " has no any enrgy for it!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (this->energyPoints != 0) {
        std::cout << "ClapTrap " << this->name << " repaire " << amount << " points of health!" << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
        return;
    }
    std::cout << "ClapTrap " << this->name << " has no any enrgy for it!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (this->hitPoints != 0) {
        std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
        this->hitPoints += amount;
        if (this->hitPoints <= 0)
            this->energyPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << this->name << " is already died!" << std::endl;
}
