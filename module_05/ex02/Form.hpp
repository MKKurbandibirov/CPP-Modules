#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <vector>
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
    void setSign( bool );
    int getSignGrade( void ) const;
    int getExecuteGrade( void ) const;

    virtual void beSigned( const Bureaucrat& ) = 0;
    virtual void execute( const Bureaucrat& ) const = 0;
    void permit(const Bureaucrat& ) const;

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

    class FormNotSignedException: public std::exception {
    private:
        std::string formName;
    public:
        FormNotSignedException( std::string );
        virtual ~FormNotSignedException() throw() {return;}
        const char* what() const throw();
    };
};

std::ostream&	operator<<( std::ostream&, const Form& );

#endif