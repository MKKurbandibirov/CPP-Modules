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
};



#endif