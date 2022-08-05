#include "Dog.hpp"

Dog::Dog(void) {
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Default constructor for class Dog called!" << std::endl;
}
Dog::Dog(std::string type) {
	this->brain = new Brain();
	this->type = "Dog_" + type;
	std::cout << "Constructor with parameter for class Dog called!" << std::endl;
}

Dog::Dog(const Dog& another) {
	this->brain = another.brain;
	this->type = another.type;
	std::cout << "Copy constructor for class Dog called!" << std::endl;
}

Dog& Dog::operator=(const Dog& another) {
	if (this == &another) {
		return *this;
	}
	this->type = another.type;
	this->brain = another.brain;
	std::cout << "Copy assignment operator for class Dog called!" << std::endl;
	return *this;
}

Dog::~Dog(void) {
	delete this->brain;
	std::cout << "Destructor for class Dog called!" << std::endl;
}

std::string Dog::getType(void) const {
	return this->type;
}

void Dog::setType(std::string& type) {
	this->type = type;
}

void Dog::makeSound(void) const {
	std::cout << "Wouw-Wouw" << std::endl;
}