#include "iter.hpp"

int main() {
    int ints[5] = {1, 2, 3, 4, 5};
    double doubles[5] = {1.4, 2.7, 3.12, 4.67, 5.34};

    iter(ints, 5, print);
    iter(doubles, 5, print);
}