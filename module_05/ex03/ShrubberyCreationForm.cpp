#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Unknown", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, 145, 137) {
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& another) : Form(another.getName(), another.getSignGrade(), another.getExecuteGrade()){
    this->target = another.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& another) {
    if (this == &another) {
        return *this;
    }
    this->target = another.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() <= this->getSignGrade()) {
        this->setSign(true);
    } else {
        throw ShrubberyCreationForm::GradeTooLowException(this->getName());
    }
}

void ShrubberyCreationForm::execute(const Bureaucrat& obj) const {
    try {
        ShrubberyCreationForm::permit(obj);
    } catch (ShrubberyCreationForm::GradeTooLowException &ex) {
        throw ShrubberyCreationForm::GradeTooLowException(this->getName());
    }
    std::ofstream outfile;
    std::string fileName = this->target + "_shrubbery";
    outfile.open(fileName.c_str());
    if (!outfile.is_open()) {
        throw std::ios::failure("Could not open file!");
    }
    outfile << ASCII_THREE << std::endl;
    outfile.close();
}