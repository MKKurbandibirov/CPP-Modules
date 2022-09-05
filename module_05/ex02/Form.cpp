#include "Form.hpp"

Form::Form(void): name("Unknown"), isSigned(false), signGrade(75), executeGrade(75) {}

Form::~Form(void) {}

Form::Form(std::string name, int sign, int execute): name(name), isSigned(false), executeGrade(execute) {
    if (sign < 1) {
        throw GradeTooHighException();
    } else if (sign > 150) {
        throw GradeTooLowException();
    }
    this->signGrade = sign;
}

Form::Form(const Form& other): name(other.name), executeGrade(other.executeGrade) {
    this->signGrade = other.signGrade;
    this->isSigned = other.isSigned;
}

Form& Form::operator=(const Form& other) {
    if (this == &other) {
        return *this;
    }
    this->signGrade = other.signGrade;
    this->isSigned = other.isSigned;
    return *this;
}

std::string Form::getName(void) const {
    return this->name;
}

bool Form::getSign(void) const {
    return this->isSigned;
}

void Form::setSign(bool sign) {
    this->isSigned = sign;
}

int Form::getSignGrade(void) const {
    return this->signGrade;
}

int Form::getExecuteGrade(void) const {
    return this->executeGrade;
}

void Form::permit(const Bureaucrat& executor) const {
    if (this->getSign() == false) {
        throw FormNotSignedException();
    } else if (executor.getGrade() > this->getExecuteGrade()) {
        throw GradeTooLowException();
    }
}

std::ostream&	operator<<( std::ostream& out, const Form& obj) {
    out << obj.getName() + ": form sign-grade " << obj.getSignGrade() << ", form execute-grade " << obj.getExecuteGrade() << ", form sign " << obj.getSign() << std::endl;
    return out;
}

const char* Form::GradeTooHighException::what() const throw() {
    return (char *)"The form grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return (char *)"The form grade too low!";
}

const char* Form::FormNotSignedException::what() const throw() {
    return (char *)"The form not signed!";
}