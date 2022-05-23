#include "Zombie.hpp"

int main(void) {
    Zombie *horde = zombieHorde(10, "Shon");
    for (int i = 0; i < 10; i++) {
        horde[i].announcement();
    }
    delete[] horde;
    return 0;
}