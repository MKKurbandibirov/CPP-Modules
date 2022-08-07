#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

private:
    AMateria* materias[4];
public:
    MateriaSource( void );
    MateriaSource( const MateriaSource& );
    ~MateriaSource( void );
    MateriaSource& operator=( const MateriaSource& );


    void learnMateria( AMateria* );
    AMateria* createMateria( std::string const& );
};

#endif