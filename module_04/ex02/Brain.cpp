#include "Brain.hpp"

Brain::Brain(void) {
    this->ideas = new std::string[100];
    this->setIdeas();
    std::cout << "Default constructor for classs Brain called!" << std::endl;
}

Brain::Brain(const Brain& another) {
    for(int i = 0; i < 100; i++) {
        this->ideas[i] = another.ideas[i];
    }
    std::cout << "Copy constructor for class Brain called!" << std::endl;
}

Brain& Brain::operator=(const Brain& another) {
    if (this == &another) {
        return *this;
    }
    for(int i = 0; i < 100; i++) {
        this->ideas[i] = another.ideas[i];
    }
    std::cout << "Copy assignment operator for class Brain called!" << std::endl;
    return *this;
}

Brain::~Brain(void) {
    delete[] ideas;
    std::cout << "Destructor for class Brain called!" << std::endl;
}

void Brain::setIdeas(void) {
    std::ostringstream oss;

    for(int i = 0; i < 100; i++) {
        oss << i;
        this->ideas[i] = "Idea number " + oss.str();
        oss.str("");
    }
}

std::string Brain::getRandomIdeas(void) const {
    return this->ideas[(std::rand() % 100)];
}