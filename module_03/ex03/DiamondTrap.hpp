#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string name;
public:
    DiamondTrap( void );
    ~DiamondTrap( void );
    DiamondTrap( const DiamondTrap& );
    DiamondTrap&   operator=( const DiamondTrap& );

    DiamondTrap( const std::string& );

    void    whoAmI( void );
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