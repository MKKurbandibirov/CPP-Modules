#include "Ice.hpp"

Ice::Ice(void) {
    this->type = "Ice";
}

Ice::Ice(std::string const &type) {
    this->type = "Ice_" + type;
}

Ice::Ice(const Ice& another) {
    this->type = another.type;
}

Ice& Ice::operator=(const Ice& another) {
    if (this == &another) {
        return *this;
    }
    this->type = another.type;
    return *this;
}

Ice::~Ice(void) {}

std::string const& Ice::getType(void) const {
    return this->type;
}

void Ice::setType(const std::string& type) {
    this->type = type;
}

AMateria* Ice::clone(void) const {
    AMateria* materia = new Ice();
    materia->setType(this->getType());
    return materia;
}

void Ice::use(ICharacter& target) {
    std::cout << "* Shoot an ice bolt at " << target.getName() << " *" << std::endl;
}