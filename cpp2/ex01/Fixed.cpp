#include "Fixed.hpp"

Fixed::Fixed() : _fix(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n) : _fix(n << _bits) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _fix(roundf(n * (1 << _bits))) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {

	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(Fixed const &Fixed) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_fix = Fixed.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fix;
}

void    Fixed::setRawBits( int const raw ) {

	this->_fix = raw;
}

int		Fixed::toInt(void) const {

	return this->_fix >> Fixed::_bits;
}

float	Fixed::toFloat(void) const {

	return (float)this->_fix / (1 << Fixed::_bits);
}

std::ostream	&operator<<(std::ostream &new_out, Fixed const &fixed)
{
    new_out << fixed.toFloat();
    return new_out;
}