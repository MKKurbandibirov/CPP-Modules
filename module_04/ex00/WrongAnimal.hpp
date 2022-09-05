#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal( const std::string );
	WrongAnimal( const WrongAnimal& );
	virtual ~WrongAnimal( void );
	WrongAnimal& operator=( const WrongAnimal& );

	std::string getType( void ) const;
	void setType( std::string& );

	void makeSound( void ) const;
};

#endif