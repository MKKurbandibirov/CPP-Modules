#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
private:
    std::string name;
    AMateria** inventory;
public:
    Character( void );
    Character( std::string& );
    Character( const Character& );
    Character& operator=( const Character& );
    ~Character( void );

    std::string const& getNmae( void ) const;
    void equip( AMateria* );
    void unequip( int );
    void use( int, ICharacter& );
};

#endif