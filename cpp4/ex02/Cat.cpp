#include "Cat.hpp"

Cat::Cat() : AAnimal() {

	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {

	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const & c) : AAnimal(c) {

	*this = c;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat		&Cat::operator=(Cat const & c) {

	this->_type = c._type;
	if (this->_brain && c._brain)
		this->_brain = new Brain(*c._brain);
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "Meow !" << std::endl;
}

Brain*	Cat::getBrain() const {
	
	return this->_brain;
}