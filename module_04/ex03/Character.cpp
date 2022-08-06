#include "Character.hpp"

Character::Character(void) {
    this->inventory = new AMateria*[4];
    this->name = "Uncknown";
}

Character::Character(const Character& another) {
    this->inventory = another.inventory;
    this->name = another.name;
}

Character::Character(std::string& name) {
    this->inventory = new AMateria*[4];
    this->name = name;
}

Character& Character::operator=(const Character& another) {
    if (this == &another) {
        return *this;
    }
    this->inventory = another.inventory;
    this->name = another.name;
    return *this;
}

Character::~Character(void) {
    delete[] this->inventory;
}

