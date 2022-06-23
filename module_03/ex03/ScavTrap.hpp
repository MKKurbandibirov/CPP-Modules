#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap 
{
public:
    ScavTrap( void );
    ~ScavTrap( void );
    ScavTrap( const ScavTrap& );
    ScavTrap&   operator=( const ScavTrap& );

    ScavTrap( const std::string& );

    void    guardGate( void );
    void    attack( const std::string & );

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