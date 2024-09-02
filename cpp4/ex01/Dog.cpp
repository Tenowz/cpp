#include "Dog.hpp"

Dog::Dog() : Animal() {

	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {

	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const & d) : Animal(d) {

	*this = d;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog		&Dog::operator=(Dog const & d) {

	this->_type = d._type;
	if (this->_brain && d._brain)
		this->_brain = new Brain(*d._brain);
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "Ouaf !" << std::endl;
}

Brain	*Dog::getBrain(void) const {

	return this->_brain;
}