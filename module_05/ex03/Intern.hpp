#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
private:
    static const std::string names[3];

    Form* createShrubberyCreationForm( std::string );
    Form* createRobotomyRequestForm( std::string );
    Form* createPresidentialPardonForm( std::string );
public:
    Intern( void );
    Intern( const Intern& );
    Intern& operator=( const Intern& );
    ~Intern( void );

    Form* makeForm( std::string, std::string );

    class FormNotFoundException : public std::exception {
    public:
        const char* what() const throw();
    };
};



#endif