#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         damage;
public:
    ClapTrap( void );
    ~ClapTrap( void );
    ClapTrap( const ClapTrap& );
    ClapTrap&   operator=( const ClapTrap& );

    ClapTrap( const std::string& );

    void attack( const std::string& );
    void takeDamage( unsigned int );
    void beRepaired( unsigned int );

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