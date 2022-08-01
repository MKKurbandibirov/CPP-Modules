#include "ClapTrap.hpp"

int main(void) {
    ClapTrap    c1("Charlie");
    ClapTrap    c2("Bob");

    c1.attack("Bob");
    c2.takeDamage(0);
    c1.takeDamage(8);
    c2.beRepaired(5);
    c1.beRepaired(3);
}