#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::~Weapon( void ) { std::cout << this->getType() << " deleted!" << std::endl; }

Weapon::Weapon( std::string type) {
    this->type = type;
}

std::string Weapon::getType( void ) {
    return this->type;
}

void    Weapon::setType( std::string type ) {
    this->type = type;
}
