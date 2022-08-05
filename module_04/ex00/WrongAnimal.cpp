#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default constructor for class WrongAnimal called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << "Constructor with parameter for class WrongAnimal called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& another) {
	this->type = another.type;
	std::cout << "Copy constructor for class WrongAnimal called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& another) {
	if (this == &another) {
		return *this;
	}
	this->type = another.type;
	std::cout << "Copy assignment operator for class Animal called!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor for class WrongAnimal called!" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::setType(std::string& type) {
	this->type = type;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Wrong uncknown sound" << std::endl;
}