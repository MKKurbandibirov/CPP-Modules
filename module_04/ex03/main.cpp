#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

int main(void) {
    AMateria * ice = new Ice("dry");
    std::cout << "Ice: " << ice->getType() << std::endl;
    AMateria* iceClone = ice->clone();
    std::cout << "Ice-clone: " << iceClone->getType() << std::endl;

    AMateria* cure = new Cure("water");
    std::cout << "Cure: " << cure->getType() << std::endl;
    AMateria* cureClone = cure->clone();
    std::cout << "Cure-clone: " << cureClone->getType() << std::endl;



    delete ice;
    delete iceClone;
    delete cure;
    delete cureClone;
}