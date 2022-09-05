#include "Intern.hpp"

const std::string Intern::names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Intern::Intern(void) {}

Intern::Intern(const Intern& obj) {(void)obj;}

Intern& Intern::operator=(const Intern& obj) {(void)obj;return *this;}

Intern::~Intern() {}

Form* Intern::createShrubberyCreationForm(std::string target) {
    std::cout << "Intern creates shrubberyForm" << std::endl;
    return new ShrubberyCreationForm("shrubbery creation", target);
}

Form* Intern::createRobotomyRequestForm(std::string target) {
    std::cout << "Intern creates robotomyForm" << std::endl;
    return new RobotomyRequestForm("robotomy request", target);
}

Form* Intern::createPresidentialPardonForm(std::string target) {
    std::cout << "Intern creates presidentialForm" << std::endl;
    return new PresidentialPardonForm("presidential pardon", target);
}

typedef Form* (Intern::*func)(std::string);

Form* Intern::makeForm(std::string name, std::string target) {
    func funcs_arr[3] = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
    for (int i = 0; i < 3; i++) {
        if (Intern::names[i] == name) {
            return (this->*funcs_arr[i])(target);
        }
    }
    throw FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw() {
    return (char *)"The form not found!";
}