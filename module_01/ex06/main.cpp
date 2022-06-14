#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        Harl smth;
        smth.complain(std::string(argv[1]));
    }

    return 0;
}