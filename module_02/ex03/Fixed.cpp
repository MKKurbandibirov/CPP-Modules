#include "Fixed.hpp"

Fixed::Fixed( void ): value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val) {
	// std::cout << "Int constructor called" << std::endl;
	this->value = val << Fixed::fract;
}

Fixed::Fixed( const float val) {
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << Fixed::fract));
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj ) {
	// std::cout << "Copy constructor called" << std::endl;
	this->value = obj.getRawBits();
}

Fixed& Fixed::operator=( const Fixed &obj ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) {
		return *this;
	}
	this->value = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits( int const raw ) {
	this->value = raw;
	// std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::toInt( void ) const {
	return this->value >> this->fract;
}

float	Fixed::toFloat( void ) const {
	return (float)this->value / (1 << this->fract);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

bool	Fixed::operator==(const Fixed &obj) {
	return (this->value << this->fract) == (obj.value << obj.fract);
}

bool	Fixed::operator!=(const Fixed &obj) {
	return (this->value << this->fract) != (obj.value << obj.fract);
}

bool	Fixed::operator>(const Fixed &obj) const {
	return (this->value << this->fract) > (obj.value << obj.fract);
}

bool	Fixed::operator<(const Fixed &obj) const {
	return (this->value << this->fract) < (obj.value << obj.fract);
}

bool	Fixed::operator>=(const Fixed &obj) {
	return (this->value << this->fract) >= (obj.value << obj.fract);
}

bool	Fixed::operator<=(const Fixed &obj) {
	return (this->value << this->fract) <= (obj.value << obj.fract);
}

Fixed	Fixed::operator+(const Fixed &obj) {
	return Fixed(this->value + obj.value);
}

Fixed	Fixed::operator-(const Fixed &obj) {
	return Fixed(this->value - obj.value);
}

Fixed	Fixed::operator*(const Fixed &obj) {
	return Fixed(this->value * obj.value);
}

Fixed	Fixed::operator/(const Fixed &obj) {
	return Fixed(this->value / obj.value);
}

Fixed	Fixed::operator++() {
	Fixed	fixed;
	fixed.value = ++this->value;
	return fixed;
}

Fixed	Fixed::operator++(int) {
	Fixed	fixed;
	fixed.value = this->value++;
	return fixed;
}

Fixed	Fixed::operator--() {
	Fixed	fixed;
	fixed.value = --this->value;
	return fixed;
}

Fixed	Fixed::operator--(int) {
	Fixed	fixed;
	fixed.value = this->value--;
	return fixed;
}

Fixed	Fixed::min(Fixed &a1, Fixed &a2) {
	return a1 > a2 ? a2 : a1;
}

const Fixed	Fixed::min(const Fixed &a1, const Fixed &a2) {
	return a1 > a2 ? a2 : a1;
}

Fixed	Fixed::max(Fixed &a1, Fixed &a2) {
	return a1 > a2 ? a1 : a2;
}

const Fixed	Fixed::max(const Fixed &a1, const Fixed &a2) {
	return a1 > a2 ? a1 : a2;
}
