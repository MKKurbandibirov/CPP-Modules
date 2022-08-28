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
        throw FormNotSignedException(this->getName());
    } else if (executor.getGrade() > this->getExecuteGrade()) {
        throw GradeTooLowException(this->getName());
    }
}

std::ostream&	operator<<( std::ostream& out, const Form& obj) {
    out << obj.getName() + ": form sign-grade " << obj.getSignGrade() << ", form execute-grade " << obj.getExecuteGrade() << ", form sign " << obj.getSign() << std::endl;
    return out;
}

Form::GradeTooHighException::GradeTooHighException(std::string formName) {
    this->formName = formName;
}

const char* Form::GradeTooHighException::what() const throw() {
    std::string res = "The form " + formName + " grade too high!";
    std::cout << res;
    return NULL;
}

Form::GradeTooLowException::GradeTooLowException(std::string formName) {
    this->formName = formName;
}

const char* Form::GradeTooLowException::what() const throw() {
    std::string res = "The form " + formName + " grade too low!";
    std::cout << res;
    return NULL;
}

Form::FormNotSignedException::FormNotSignedException(std::string formName) {
    this->formName = formName;
}

const char* Form::FormNotSignedException::what() const throw() {
    std::string res = "The form " + formName + " not signed!";
    std::cout << res;
    return NULL;
}