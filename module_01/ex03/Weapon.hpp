#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:
    ~Weapon( void );

    Weapon( std::string type );
    std::string getType( void );
    void    setType( std::string type );

private:
    Weapon( void );

    std::string type;

};

#endif