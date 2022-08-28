#ifndef PRESIDENTAL_PARDON_FORM_HPP
# define PRESIDENTAL_PARDON_FORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm( void );
    ~PresidentialPardonForm();
    PresidentialPardonForm( const PresidentialPardonForm& );
    PresidentialPardonForm& operator=( const PresidentialPardonForm& );

    PresidentialPardonForm( std::string, std::string );

    void beSigned( const Bureaucrat& );
    void execute( const Bureaucrat& ) const;
};


#endif