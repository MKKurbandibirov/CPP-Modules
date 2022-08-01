#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : private ScavTrap, private FragTrap {
private:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         damage;
public:
    DiamondTrap( void );
    ~DiamondTrap( void );
    DiamondTrap( const DiamondTrap& );
    DiamondTrap&   operator=( const DiamondTrap& );

    DiamondTrap( const std::string& );

    void    whoAmI( void );
    void    attack( const std::string & );

    std::string getName( void ) const;
    void    setName( const std::string &name );

    int getHP( void ) const;
    void    setHP( const int );

    int getEP( void ) const;
    void    setEP( const int );

    int getDamage( void ) const;
    void    setDamage( const int damage );

};

#endif