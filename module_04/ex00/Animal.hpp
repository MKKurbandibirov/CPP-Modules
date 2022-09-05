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
	virtual ~Animal( void );
	Animal& operator=( const Animal& );

	std::string getType( void ) const;
	void setType( std::string& );

	virtual void makeSound( void ) const;
};

#endif