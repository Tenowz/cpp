#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {

	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & obj) {

	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & obj) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = obj._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "*WrongAnimal sound*" << std::endl;
}

std::string	WrongAnimal::getType(void) const {

	return this->_type;
}