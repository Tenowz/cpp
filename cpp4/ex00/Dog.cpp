#include "Dog.hpp"

Dog::Dog() : Animal() {

	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & obj) : Animal(obj) {

	*this = obj;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog		&Dog::operator=(Dog const & obj) {

	this->_type = obj._type;
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {

	std::cout << "Ouaf !" << std::endl;
}