#include "Fixed.hpp"

Fixed::Fixed( const int fixed ) {
    // std::cout << "Int constructor called" << std::endl;
    this->value = fixed << this->fract;
}

Fixed::Fixed( const float fixed ) {
    // std::cout << "Float constructor called" << std::endl;
    this->value = roundf( fixed * (1 << this->fract) );
}

Fixed::Fixed() {
    // std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed (const Fixed & fixed) {
    // std::cout << "Copy constructor calles" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator = (const Fixed &fixed) {
    
    // std::cout << "Copy assegnment operator called" << std::endl;

    if (this != &fixed) {
        this->value = fixed.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const raw ) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

std::ostream &operator << ( std::ostream &out, Fixed const &fixed ) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator > ( const Fixed &fixed  ) const{

    if (this->toFloat() > fixed.toFloat()) {
        return true;
    } else {
        return false;
    }

}

bool Fixed::operator < ( const Fixed &fixed ) const{
    return (value < fixed.value);
}

bool Fixed::operator >= ( Fixed const &fixed  ) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator <= ( Fixed const &fixed  ) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator == ( Fixed const &fixed  ) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator != ( Fixed const &fixed  ) const {
    return this->getRawBits() != fixed.getRawBits();
}

float Fixed::toFloat() const {
    return (float)this->value / ( 1 << this->fract );
}

int Fixed::toInt()  const {
    return this->value >> this->fract;
}

Fixed  Fixed::operator + ( Fixed const &fixed ) const {
    Fixed fixed1;
    fixed1.setRawBits(this->value + fixed.value );
    return fixed1;
}

Fixed  Fixed::operator - ( Fixed const &fixed ) const {
    Fixed fixed1;
    fixed1.setRawBits(this->value - fixed.value);
    return fixed1;
}

Fixed Fixed::operator * ( const Fixed &fixed ) const {
    Fixed fixed1;
    fixed1.setRawBits((this->value * fixed.value) / (1 << this->fract) );
    return fixed1;
}

Fixed Fixed::operator / ( Fixed const &fixed ) const {
    Fixed fixed1;
    fixed1.setRawBits((this->value / fixed.value) * (1 << this->fract) );
    return fixed1;
}

Fixed Fixed::operator++ (int) {
    Fixed val;
    val.value = this->value++;
    return val;
}

Fixed Fixed::operator++ () {
    Fixed val;
    val.value = ++this->value;
    return val;
}

Fixed Fixed::operator-- (int) {
    Fixed val;
    val.value = this->value--;
    return val;
}

Fixed Fixed::operator-- () {
    Fixed val;
    val.value = --this->value;
    return val;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    if (first > second || first == second) {
        return first;
    }
    return second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {

    if (first > second || first == second) {
            return first;
    }
    return second;
}


Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    if (first < second) {
        return first;
    }
    return second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
    if (first < second) {
        return first;
    }
    return second;
}