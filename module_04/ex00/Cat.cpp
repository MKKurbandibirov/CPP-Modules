#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "Default constructor for class Cat called!" << std::endl;
}

Cat::Cat(std::string type) {
	this->type = "Cat_" + type;
	std::cout << "Constructor with parameter for class Cat called!" << std::endl;
}

Cat::Cat(const Cat& another) {
	this->type = another.type;
	std::cout << "Copy constructor for class Cat called!" << std::endl;
}

Cat& Cat::operator=(const Cat& another) {
	if (this == &another) {
		return *this;
	}
	this->type = another.type;
	std::cout << "Copy assignment operator for class Cat called!" << std::endl;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Destructor for class Cat called!" << std::endl;
}

std::string Cat::getType(void) const {
	return this->type;
}

void Cat::setType(std::string& type) {
	this->type = type;
}

void Cat::makeSound(void) const {
	std::cout << "Meow-Meow" << std::endl;
}
