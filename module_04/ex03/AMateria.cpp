#include "AMateria.hpp"

AMateria::AMateria(void) {
    this->type = "Uncknown";
}

AMateria::AMateria(std::string const &type) {
    this->type = type;
}

AMateria::AMateria(const AMateria& another) {
    this->type = another.type;
}

AMateria& AMateria::operator=(const AMateria& another) {
    if (this == &another) {
        return *this;
    }
    this->type = another.type;
    return *this;
}

std::string const& AMateria::getType(void) const {
    return this->type;
}

void AMateria::setType(const std::string& type) {
    this->type = type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* Use materia at " << target.getName() << " *" << std::endl;
}