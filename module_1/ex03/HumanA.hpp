#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

public:
    ~HumanA( void );
    HumanA( std::string name, Weapon & );

    std::string getName( void );
    void        setName( std::string );
    void        attack( void );

private:
    HumanA( void );
    HumanA( const HumanA &);
    HumanA & operator = ( const HumanA & );

    Weapon      &weapon;
    std::string name;

};

#endif