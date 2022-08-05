#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>
# include <iostream>
# include <cstdlib>


class Brain {

private:
    std::string* ideas;
    void setIdeas( void );

public:
    Brain( void );
    Brain( const Brain& );
    ~Brain( void );
    Brain& operator=( const Brain& );

    std::string getRandomIdeas( void ) const;
    
};

#endif