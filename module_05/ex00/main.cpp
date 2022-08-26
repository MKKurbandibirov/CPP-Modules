#include "Bureaucrat.hpp"


int main() {
    Bureaucrat b1("Bob", 2);

    b1.incrementGrade();
    std::cout << b1;
    try {
        b1.incrementGrade();
    } catch (std::exception &e) {
        e.what();
    }
    std::cout << b1;

    try {
        Bureaucrat b2("John", 151);
    } catch (std::exception &e) {
        e.what();
    }

    return 0;
}