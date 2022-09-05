#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    // ShrubberyCreationForm sh1("FORM-23A", "file23A");
    // ShrubberyCreationForm sh2("FORM-26A", "file26A");
    // Bureaucrat b1("Bob", 75);
    // Bureaucrat b2("John", 149);
    // try {
    //     b1.signForm(sh1);
    //     b1.executeForm(sh1);
    //     b1.executeForm(sh2);
    //     b2.signForm(sh2);
    // } catch (std::exception &ex) {
    //     std::cout << ex.what() << std::endl;
    // }

    // RobotomyRequestForm r1("FORM-8B", "Alice");
    // RobotomyRequestForm r2("FORM-12C", "Eva");
    // Bureaucrat b3("Bob", 33);
    // Bureaucrat b4("John", 149);
    // try {
    //     b3.signForm(r1);
    //     b3.executeForm(r1);
    //     b3.executeForm(r2);
    //     b4.signForm(r2);
    // } catch (std::exception &ex) {
    //     std::cout << ex.what() << std::endl;
    // }

    // PresidentialPardonForm p1("FORM-1G", "Arthur");
    // PresidentialPardonForm p2("FORM-2F", "George");
    // Bureaucrat b5("Bob", 4);
    // Bureaucrat b6("John", 149);
    // try {
    //     b5.signForm(p1);
    //     b5.executeForm(p1);
    //     b5.executeForm(p2);
    //     b6.signForm(p2);
    // } catch (std::exception &ex) {
    //     std::cout << ex.what() << std::endl;
    // }

    try {
        Intern i1;

        Form* f1 = i1.makeForm("robotomy", "Bender");
        std::cout << *f1;
        delete f1;
    } catch (Intern::FormNotFoundException &ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}