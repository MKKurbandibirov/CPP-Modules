#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Unknown", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : Form(name, 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& another) : Form(another.getName(), another.getSignGrade(), another.getExecuteGrade()){
    this->target = another.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& another) {
    if (this == &another) {
        return *this;
    }
    this->target = another.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() <= this->getSignGrade()) {
        this->setSign(true);
    } else {
        throw PresidentialPardonForm::GradeTooLowException();
    }
}

void PresidentialPardonForm::execute(const Bureaucrat& obj) const {
    try {
        PresidentialPardonForm::permit(obj);
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
    } catch (PresidentialPardonForm::GradeTooLowException & e) {
        throw PresidentialPardonForm::GradeTooLowException();
    }
}