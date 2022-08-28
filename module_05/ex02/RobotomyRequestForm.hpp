#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm( void );
    ~RobotomyRequestForm();
    RobotomyRequestForm( const RobotomyRequestForm& );
    RobotomyRequestForm& operator=( const RobotomyRequestForm& );

    RobotomyRequestForm( std::string, std::string );

    void beSigned( const Bureaucrat& );
    void execute( const Bureaucrat& ) const;
};


#endif