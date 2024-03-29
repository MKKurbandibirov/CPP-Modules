#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("Unknown"), grade(15) {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name) {
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this == &other) {
        return *this;
    }
    this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void) {}

int Bureaucrat::getGrade(void) const {
    return this->grade;
}

std::string Bureaucrat::getName(void) const {
    return this->name;
}

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& obj) {
    out << obj.getName() + ", bureaucrat grade " << obj.getGrade() << std::endl;
    return out;
}

void Bureaucrat::incrementGrade(void) {
    this->grade -= 1;
    if (this->grade < 1) {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade(void) {
    this->grade += 1;
    if (this->grade > 150) {
        throw GradeTooLowException();
    }
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() + " signed " + form.getName() << std::endl;
    } catch (Form::GradeTooLowException &ex) {
        std::cout << this->getName() + " couldn't sign " + form.getName() + " because " << ex.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const Form& form) const {
    try {
        form.execute(*this);
        std::cout << this->getName() + " executed " + form.getName() << std::endl;
    } catch (Form::FormNotSignedException &ex) {
        std::cout << this->getName() + " couldn't execute " + form.getName() + " because " << ex.what() << std::endl;
    } catch (Form::GradeTooLowException &ex) {
        std::cout << this->getName() + " couldn't execute " + form.getName() + " because " << ex.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return (char *)"The grade too high for bureaucrat";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return (char *)"The grade too low for bureaucrat";
}