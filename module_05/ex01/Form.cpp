#include "Form.hpp"

Form::Form(void): name("Unknown"), isSigned(false), signGrade(75), executeGrade(75) {}

Form::~Form(void) {}

Form::Form(std::string name, int sign, int execute): name(name), isSigned(false), executeGrade(execute) {
    if (sign < 1) {
        throw GradeTooHighException(this->getName());
    } else if (sign > 150) {
        throw GradeTooLowException(this->getName());
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

int Form::getSignGrade(void) const {
    return this->signGrade;
}

int Form::getExecuteGrade(void) const {
    return this->executeGrade;
}

void Form::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() < this->signGrade) {
        this->isSigned = true;
    } else {
        throw GradeTooLowException(this->getName());
    }
}

std::ostream&	operator<<( std::ostream& out, const Form& obj) {
    out << obj.getName() + ", form grade " << obj.getSignGrade() << ", form sign " << obj.getSign() << std::endl;
    return out;
}

Form::GradeTooHighException::GradeTooHighException(std::string formName) {
    this->formName = formName;
}

const char* Form::GradeTooHighException::what() const throw() {
    std::string res = "The form " + formName + " grade too high!";
    std::cout << res << std::endl;
    return NULL;
}

Form::GradeTooLowException::GradeTooLowException(std::string formName) {
    this->formName = formName;
}

const char* Form::GradeTooLowException::what() const throw() {
    std::string res = "The form " + formName + " grade too low!";
    std::cout << res << std::endl;
    return NULL;
}