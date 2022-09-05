#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Default constructor for class Animal called!" << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Constructor with parameter for class Animal called!" << std::endl;
}

Animal::Animal(const Animal& another) {
	this->type = another.type;
	std::cout << "Copy constructor for class Animal called!" << std::endl;
}

Animal& Animal::operator=(const Animal& another) {
	if (this == &another) {
		return *this;
	}
	this->type = another.type;
	std::cout << "Copy assignment operator for class Animal called!" << std::endl;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Destructor for class Animal called!" << std::endl;
}
