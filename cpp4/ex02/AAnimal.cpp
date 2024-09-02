#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unknown") {

	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal() {

	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & a) {

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = a;
}

AAnimal	&AAnimal::operator=(AAnimal const & a) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = a._type;
	return *this;
}

void	AAnimal::makeSound(void) const {

	std::cout << "*AAnimal sound*" << std::endl;
}

std::string	AAnimal::getType(void) const {

	return this->_type;
}

void	AAnimal::setType(std::string newType) {

	this->_type = newType;
}