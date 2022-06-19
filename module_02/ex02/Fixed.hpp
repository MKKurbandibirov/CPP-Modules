#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
	Fixed&	operator=( const Fixed & );

	bool	operator>( const Fixed & ) const;
	bool	operator<( const Fixed & ) const;
	bool	operator>=( const Fixed & );
	bool	operator<=( const Fixed & );
	bool	operator==( const Fixed & );
	bool	operator!=( const Fixed & );

	Fixed	operator+( const Fixed & );
	Fixed	operator-( const Fixed & );
	Fixed	operator*( const Fixed & );
	Fixed	operator/( const Fixed & );

	Fixed	operator++( void );
	Fixed	operator++( int );
	Fixed	operator--( void );
	Fixed	operator--( int );

	static Fixed		min( Fixed &, Fixed & );
	static const Fixed	min( const Fixed &, const Fixed & );
	static Fixed		max( Fixed &, Fixed & );
	static const Fixed	max( const Fixed &, const Fixed & );

	int		getRawBits( void ) const;
	void	setRawBits( const int );
	float	toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream&	operator<<(std::ostream &out, const Fixed &obj);

#endif