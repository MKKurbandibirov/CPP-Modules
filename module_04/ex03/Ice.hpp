#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
    
private:
    void setType( const std::string& );    

public:
    Ice( std::string const& );
    Ice( void );
    Ice( const Ice& );
    Ice& operator=( const Ice& );
    ~Ice( void );

    std::string const &getType( void ) const;
    AMateria* clone( void ) const;
    void use( ICharacter& target );
};

#endif