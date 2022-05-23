#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
    Zombie( std::string name );
    ~Zombie( void );
    std::string getName( void );
    void    setName( std::string name );
    void    announcement( void );

private:
    std::string name;

    Zombie( void );
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif