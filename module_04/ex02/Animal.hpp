#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal( const std::string );
	Animal( const Animal& );
	virtual ~Animal( void ) = 0;
	Animal& operator=( const Animal& );

	virtual std::string getType( void ) const = 0;
	virtual void setType( std::string& ) = 0;

	virtual void makeSound( void ) const = 0;
};

#endif