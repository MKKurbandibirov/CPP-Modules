#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

private:
	Brain* brain;

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