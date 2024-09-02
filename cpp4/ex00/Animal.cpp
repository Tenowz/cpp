#include "Animal.hpp"

Animal::Animal() : _type("Animal") {

	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & obj) {

	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Animal	&Animal::operator=(Animal const & obj) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = obj._type;
	return *this;
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const {

	std::cout << "*Animal sound*" << std::endl;
}

std::string	Animal::getType(void) const {

	return this->_type;
}

void	Animal::setType(std::string newType) {

	this->_type = newType;
}