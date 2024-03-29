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

    void beSigned( const Bureaucrat& );

    class GradeTooHighException: public std::exception {
    private:
        std::string formName;
    public:
        GradeTooHighException( std::string );
        virtual ~GradeTooHighException() throw() {return;}
        const char* what() const throw();
    };

    class GradeTooLowException: public std::exception {
    private:
        std::string formName;
    public:
        GradeTooLowException( std::string );
        virtual ~GradeTooLowException() throw() {return;}
        const char* what( void ) const throw();
    };
};

std::ostream&	operator<<( std::ostream&, const Form& );

#endif