#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fract = 8;
public:
	Fixed( void );
	~Fixed( void );
	Fixed( const Fixed & );
	Fixed( const int );
	Fixed( const float );
	Fixed	&operator=( const Fixed & );

	int		getRawBits( void ) const;
	void	setRawBits( int const );
	float	toFloat( void ) const;
	int		toInt( void ) const;

};


#endif