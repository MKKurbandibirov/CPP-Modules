#include "Character.hpp"

Character::Character(void) {
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
    this->name = "Uncknown";
}

Character::Character(const Character& another) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL) {
            delete this->inventory[i];
        }
        if (another.inventory[i] != NULL) {
            this->inventory[i] = another.inventory[i]->clone();
        } else {
            this->inventory[i] = NULL;
        }
    }
    this->name = another.name;
}

Character::Character(std::string name) {
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
    this->name = name;
}

Character& Character::operator=(const Character& another) {
    if (this == &another) {
        return *this;
    }
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL) {
            delete this->inventory[i];
        }
        if (another.inventory[i] != NULL) {
            this->inventory[i] = another.inventory[i]->clone();
        } else {
            this->inventory[i] = NULL;
        }
    }
    this->name = another.name;
    return *this;
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL) {
            delete this->inventory[i];
        }
    }
}

std::string const& Character::getName(void) const {
    return this->name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] == NULL) {
            this->inventory[i] = m->clone();
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL) {
        this->inventory[idx] = NULL;
    } 
}

void Character::use(int idx, ICharacter& character) {
    if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL) {
        this->inventory[idx]->use(character);
    }
}
