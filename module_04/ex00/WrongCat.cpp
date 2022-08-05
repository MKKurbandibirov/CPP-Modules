#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->type = "Cat";
	std::cout << "Default constructor for class WrongCat called!" << std::endl;
}

WrongCat::WrongCat(std::string type) {
	this->type = "WrongCat_" + type;
	std::cout << "Constructor with parameter for class WrongCat called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& another) {
	this->type = another.type;
	std::cout << "Copy constructor for class WrongCat called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& another) {
	if (this == &another) {
		return *this;
	}
	this->type = another.type;
	std::cout << "Copy assignment operator for class WrongCat called!" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor for class WrongCat called!" << std::endl;
}

std::string WrongCat::getType(void) const {
	return this->type;
}

void WrongCat::setType(std::string& type) {
	this->type = type;
}

void WrongCat::makeSound(void) const {
	std::cout << "Wrong Meow-Meow" << std::endl;
}
