#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
    
private:
    void setType( const std::string& );    

public:
    Cure( std::string const& );
    Cure( void );
    Cure( const Cure& );
    Cure& operator=( const Cure& );
    ~Cure( void );

    std::string const &getType( void ) const;
    AMateria* clone( void ) const;
    void use( ICharacter& target );
};

#endif