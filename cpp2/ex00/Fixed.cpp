#include "Fixed.hpp"

Fixed::Fixed() : _fix(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
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