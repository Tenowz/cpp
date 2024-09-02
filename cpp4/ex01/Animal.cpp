#include "Animal.hpp"

Animal::Animal() : _type("Unknown") {

	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & a) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
}

Animal	&Animal::operator=(Animal const & a) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = a._type;
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