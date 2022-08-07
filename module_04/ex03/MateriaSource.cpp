#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& another) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] != NULL) {
            delete this->materias[i];
        }
        this->materias[i] = another.materias[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& another) {
    if (this != &another) {
        for (int i = 0; i < 4; i++) {
            if (this->materias[i] != NULL) {
                delete this->materias[i];
            }
            this->materias[i] = another.materias[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] != NULL) {
            delete this->materias[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] == NULL) {
            this->materias[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] != NULL && this->materias[i]->getType() == type) {
            return this->materias[i]->clone();
        }
    }
    return NULL;
}