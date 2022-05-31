#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

public:
    ~HumanB( void );
    HumanB( std::string );
    HumanB( std::string, Weapon & );

    std::string getName( void );
    void        setName( std::string );

    Weapon  getWeapon( void );
    void    setWeapon( Weapon &);

    void    attack( void );

private:
    HumanB( void );
    HumanB( const HumanB & );
    HumanB & operator = ( const HumanB & );

    Weapon *weapon;
    std::string name;

};

#endif