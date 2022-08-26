#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Form f1("FORM-1", 20, 30), f2("FORM-2", 20, 30);
    Bureaucrat b1("Bob", 10), b2("John", 40);

    try {
        f1.beSigned(b1);
        b1.signForm(f1);
    } catch (std::exception &e) {
        e.what();
    }

    try {
        f2.beSigned(b2);
        b2.signForm(f2);
    } catch (std::exception &e) {
        e.what();
    }

    std::cout << f1 << f2;

    return 0;
}