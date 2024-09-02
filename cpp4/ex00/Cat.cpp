#include "Cat.hpp"

Cat::Cat() : Animal() {

	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & obj) : Animal(obj) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat		&Cat::operator=(Cat const & obj) {

	this->_type = obj._type;
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {

	std::cout << "Meow !" << std::endl;
}