#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

private:
	Brain *brain;

public:
	Cat( void );
	Cat( std::string );
	Cat( const Cat& );
	Cat& operator=( const Cat& );
	~Cat( void );

	std::string getType( void ) const;
	void setType( std::string& );

	void makeSound( void ) const;

};

#endif