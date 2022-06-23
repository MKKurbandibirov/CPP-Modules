#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap( void );
    ~FragTrap( void );
    FragTrap( const FragTrap& );
    FragTrap&   operator=( const FragTrap& );

    FragTrap( const std::string& );

    void    highFivesGuys( void );

    // std::string     getName( void ) const;
    // void            setName( const std::string& );
    // unsigned int    getHP( void ) const;
    // void            setHP( unsigned int );
    // unsigned int    getEP( void ) const;
    // void            setEP( unsigned int );
    // unsigned int    getDamage( void ) const;
    // void            setDamage( unsigned int );
};



#endif