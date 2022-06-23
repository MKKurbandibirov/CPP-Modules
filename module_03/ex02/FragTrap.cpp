#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    this->name = "Undefined";
    this->damage = 0;
    this->hitPoints = 0;
    this->energyPoints = 0;
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
    std::cout << "FragTrap " << this->name << " copied!" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap& another ) {
    if (this == &another)
        return *this;
    this->name = another.name;
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << this->name << " died!" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << this->name << " give me a five!" << std::endl;
}