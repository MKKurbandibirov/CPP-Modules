#include "Fixed.hpp"

Fixed::Fixed( void ): value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->value = val << this->fract;
}

Fixed::Fixed( const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << this->fract));
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = obj.getRawBits();
}

Fixed& Fixed::operator=( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) {
		return *this;
	}
	this->value = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits( int const raw ) {
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::toInt( void ) const {
	return this->value >> this->fract;
}

float	Fixed::toFloat( void ) const {
	return float((float)this->value / (float)(1 << this->fract));
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj) {
	return out << obj.toFloat();
}
