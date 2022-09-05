#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat( void );
    ~Bureaucrat( void );
    Bureaucrat( std::string, int );
    Bureaucrat( const Bureaucrat& );
    Bureaucrat& operator=( const Bureaucrat& );

    std::string getName( void ) const;
    int getGrade( void ) const;

    void incrementGrade( void );
    void decrementGrade( void );
    void signForm( Form& );
    void executeForm( const Form& ) const;

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();   
    };

};

std::ostream&	operator<<( std::ostream&, const Bureaucrat& );


#endif