#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
    const std::string name;
    bool isSigned;
    int signGrade;
    const int executeGrade;
public:
    Form( void );
    ~Form( void );
    Form( std::string, int, int );
    Form( const Form& );
    Form& operator=( const Form& );

    std::string getName( void ) const;
    bool getSign( void ) const;
    int getSignGrade( void ) const;
    int getExecuteGrade( void ) const;

    bool beSigned( const Bureaucrat& );

    class GradeTooHighException: public std::exception {
    public:
        GradeTooHighException( std::string );
    };

    class GradeTooLowException: public std::exception {
    public:
        GradeTooLowException( std::string );
    };
};

std::ostream&	operator<<( std::ostream&, const Form& );

#endif