#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap D("Boris");

    D.attack("Bob");
    D.whoAmI();

    std::cout << "Hit points is " << D.getHP() << std::endl;
    std::cout << "Energy points is " << D.getEP() << std::endl;
    std::cout << "Damage is " << D.getDamage() << std::endl;
}