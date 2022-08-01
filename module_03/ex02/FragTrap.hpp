#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : private ClapTrap
{
private:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         damage;
public:
    FragTrap( void );
    ~FragTrap( void );
    FragTrap( const FragTrap& );
    FragTrap&   operator=( const FragTrap& );

    FragTrap( const std::string& );

    void    highFivesGuys( void );

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