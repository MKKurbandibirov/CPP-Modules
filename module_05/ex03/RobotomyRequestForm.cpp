#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Unknown", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, 72, 45) {
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& another) : Form(another.getName(), another.getSignGrade(), another.getExecuteGrade()){
    this->target = another.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& another) {
    if (this == &another) {
        return *this;
    }
    this->target = another.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() <= this->getSignGrade()) {
        this->setSign(true);
    } else {
        throw RobotomyRequestForm::GradeTooLowException();
    }
}

void RobotomyRequestForm::execute(const Bureaucrat& obj) const {
    try {
        RobotomyRequestForm::permit(obj);
        std::cout << "Makes some drilling noises..." << std::endl;
        if (std::rand() % 2 == 0) {
            std::cout << this->target << " has been robotomized!" << std::endl;
        } else {
            std::cout << this->target << " robotomy failed!" << std::endl;
        }
    } catch (RobotomyRequestForm::GradeTooLowException& ex) {
        throw RobotomyRequestForm::GradeTooLowException();
    }
}