#include "Cure.hpp"

Cure::Cure(void) {
    this->type = "Cure";
}

Cure::Cure(std::string const &type) {
    this->type = "Cure_" + type;
}

Cure::Cure(const Cure& another) {
    this->type = another.type;
}

Cure& Cure::operator=(const Cure& another) {
    if (this == &another) {
        return *this;
    }
    this->type = another.type;
    return *this;
}

Cure::~Cure(void) {}

std::string const& Cure::getType(void) const {
    return this->type;
}

void Cure::setType(const std::string& type) {
    this->type = type;
}

AMateria* Cure::clone(void) const {
    AMateria* materia = new Cure();
    materia->setType(this->getType());
    return materia;
}

void Cure::use(ICharacter& target) {
    std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}