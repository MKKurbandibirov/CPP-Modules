#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
    Zombie( std::string name );
    Zombie( void );
    ~Zombie( void );
    std::string getName( void );
    void    setName( std::string name );
    void    announcement( void );

private:
    std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif