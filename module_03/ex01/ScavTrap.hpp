#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: private ClapTrap 
{
private:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         damage;
public:
    ScavTrap( void );
    ~ScavTrap( void );
    ScavTrap( const ScavTrap& );
    ScavTrap&   operator=( const ScavTrap& );

    ScavTrap( const std::string& );

    void    guardGate( void );
    void    attack( const std::string & );
};


#endif