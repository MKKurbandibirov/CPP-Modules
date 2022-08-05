#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	WrongCat( void );
	WrongCat( std::string );
	WrongCat( const WrongCat& );
	WrongCat& operator=( const WrongCat& );
	~WrongCat( void );

	std::string getType( void ) const;
	void setType( std::string& );

	void makeSound( void ) const;

};

#endif