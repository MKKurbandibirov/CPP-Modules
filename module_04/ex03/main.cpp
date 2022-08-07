#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void) {
    ICharacter* Bob = new Character("Bob");
    ICharacter* Alice = new Character("Alice");

    AMateria * ice = new Ice("dry");
    std::cout << "Ice: " << ice->getType() << std::endl;
    ice->use(*Bob);
    AMateria* iceClone = ice->clone();
    std::cout << "Ice-clone: " << iceClone->getType() << std::endl;

    AMateria* cure = new Cure("water");
    std::cout << "Cure: " << cure->getType() << std::endl;
    cure->use(*Alice);
    AMateria* cureClone = cure->clone();
    std::cout << "Cure-clone: " << cureClone->getType() << std::endl;

    Bob->equip(ice);
    Bob->equip(iceClone);
    Bob->equip(cure);
    Bob->equip(cureClone);

    Bob->unequip(2);

    Bob->use(0, *Alice);
    Bob->use(2, *Alice);
    Bob->use(3, *Alice);

    IMateriaSource* source = new MateriaSource();
    source->learnMateria(ice);
    source->learnMateria(cure);


    AMateria* test = source->createMateria("Ice_dry");
    if (test != NULL) {
        std::cout << "Ice-test: " << test->getType() << std::endl;
    }


    delete ice;
    delete iceClone;
    delete cure;
    delete cureClone;
    delete Bob;
    delete Alice;
    delete source;
    delete test;
}