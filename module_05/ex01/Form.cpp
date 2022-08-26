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
    // if (execute < 1) {
    //     throw GradeTooHighException(this->getName());
    // } else if (execute > 150) {
    //     throw GradeTooLowException(this->getName());
    // }
    // this->executeGrade = execute;
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

bool Form::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() < this->signGrade) {
        this->isSigned = true;
        return true;
    } else {
        throw GradeTooLowException(this->getName());
        return false;
    }
}

std::ostream&	operator<<( std::ostream& out, const Form& obj) {
    out << obj.getName() + ", form grade " << obj.getSignGrade() << ", form sign " << obj.getSign() << std::endl;
    return out;
}

Form::GradeTooHighException::GradeTooHighException(std::string formName) {
    std::cout << "The form " + formName + " grade too high!" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(std::string formName) {
    std::cout << "The form " + formName + " grade too low!" << std::endl;
}