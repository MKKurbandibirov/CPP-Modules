#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->getName() << " is dead!" << std::endl;
}

std::string Zombie::getName( void ) {
    return this->name;
}

void    Zombie::setName( std::string name ) {
    this->name = name;
}

void    Zombie::announcement() {
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}