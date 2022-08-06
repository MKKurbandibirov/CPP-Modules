#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
protected:
    std::string type;

public:
    AMateria( std::string const& );
    AMateria( void );
    AMateria( const AMateria& );
    AMateria& operator=( const AMateria& );
    virtual ~AMateria( void ) {}

    std::string const &getType( void ) const;
    void setType( const std::string& );
    virtual AMateria* clone( void ) const = 0;
    virtual void use( ICharacter& );
};

#endif