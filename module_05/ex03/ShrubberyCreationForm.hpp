#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "fstream"

# define ASCII_THREE     \
"    oxoxoo    ooxoo\n"  \
"  ooxoxo oo  oxoxooo\n" \
" oooo xxoxoo ooo ooox\n"\
" oxo o oxoxo  xoxxoxo\n"\
"  oxo xooxoooo o ooo\n" \
"    ooo'\'oo'\'  /o/o\n"\
"        '\'  '\'/ /\n"  \
"         |   /\n"       \
"         |  |\n"        \
"         | D|\n"        \
"         |  |\n"        \
"         |  |\n"        \
"  ______/____'\'____\n" \

class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm( void );
    ~ShrubberyCreationForm();
    ShrubberyCreationForm( const ShrubberyCreationForm& );
    ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );

    ShrubberyCreationForm( std::string, std::string );

    void beSigned( const Bureaucrat& );
    void execute( const Bureaucrat& ) const;
};


#endif