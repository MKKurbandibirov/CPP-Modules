#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

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

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException( std::string );
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException( std::string );    
    };

};

std::ostream&	operator<<( std::ostream&, const Bureaucrat& );


#endif