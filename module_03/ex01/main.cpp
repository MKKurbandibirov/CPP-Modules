#include "ScavTrap.hpp"

int main(void) {
    ScavTrap    s1("Charlie");
    ScavTrap    s2;

    s2.attack(s1.getName());

    s1.attack("Bob");
    s1.guardGate();

    std::cout << "---------------------------" << std::endl;

    s1.setDamage(1000);
    s1.setEP(2399);

    s2 = s1;
    std::cout << s2.getName() << std::endl;
    std::cout << s2.getEP() << std::endl;
    std::cout << s2.getHP() << std::endl;
    std::cout << s2.getDamage() << std::endl;
}