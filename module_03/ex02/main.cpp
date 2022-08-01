#include "FragTrap.hpp"

int main(void) {
    FragTrap    f1("Charlie");
    FragTrap    f2;

    f1.highFivesGuys();

    f1.setDamage(1000);
    f1.setEP(2399);

    f2 = f1;
    std::cout << f2.getName() << std::endl;
    std::cout << f2.getEP() << std::endl;
    std::cout << f2.getHP() << std::endl;
    std::cout << f2.getDamage() << std::endl;
}