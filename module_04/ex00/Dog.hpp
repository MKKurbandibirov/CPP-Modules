#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {

// private:
	// std::string type;

public:
	Dog( void );
	Dog( std::string );
	Dog( const Dog& );
	Dog& operator=( const Dog& );
	~Dog( void );

	std::string getType( void ) const;
	void setType( std::string& );

	void makeSound( void ) const;

};

#endif