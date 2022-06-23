#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    this->setName("Undefined");
    this->setHP(0);
    this->setEP(0);
    this->setDamage(0);
    std::cout << "Empty FragTrap created!" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name) {
    this->setName(name);
    this->setDamage(30);
    this->setEP(100);
    this->setHP(100);
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& another ) {
    this->setName(another.getName());
    this->setDamage(another.getDamage());
    this->setEP(another.getEP());
    this->setHP(another.getHP());
    std::cout << "FragTrap " << this->getName() << " copied!" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap& another ) {
    if (this == &another)
        return *this;
    this->setName(another.getName());
    this->setDamage(another.getDamage());
    this->setEP(another.getEP());
    this->setHP(another.getHP());
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << this->getName() << " died!" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << this->getName() << " give me a five!" << std::endl;
}