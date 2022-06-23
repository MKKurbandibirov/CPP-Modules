#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    this->setName("Undefined");
    this->setHP(0);
    this->setEP(0);
    this->setDamage(0);
    std::cout << "Empty ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap( const std::string & name ) : ClapTrap( name ) {
    this->setName(name);
    this->setDamage(20);
    this->setEP(50);
    this->setHP(100);
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& another) {
    this->setName(another.getName());
    this->setDamage(another.getDamage());
    this->setEP(another.getEP());
    this->setHP(another.getHP());
    std::cout << "ScavTrap " << this->getName() << " copied!" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap& another ) {
    if (this == &another)
        return *this;
    this->setName(another.getName());
    this->setDamage(another.getDamage());
    this->setEP(another.getEP());
    this->setHP(another.getHP());
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->getName() << " died!" << std::endl;
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl; 
}

void    ScavTrap::attack( const std::string& name ) {
    if (this->getEP() != 0) {
        std::cout << "ScavTrap " << this->getName() << " attacks " << name << ", causing " << this->getDamage() << " points of damage!" << std::endl;
        this->setEP(this->getEP() - 1);
        return;
    }
    std::cout << "ScavTrap " << this->getName() << " has no any energy for it!" << std::endl;
}