#include "Zombie.hpp"

int main(void) {
    randomChump("Andrew");
    Zombie *zmb = newZombie("Shon");
    zmb->announcement();
    delete zmb;
    return 0;
}