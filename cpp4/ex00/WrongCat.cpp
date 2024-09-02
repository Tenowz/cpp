#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & obj) : WrongAnimal(obj) {

	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

WrongCat		&WrongCat::operator=(WrongCat const & a) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = a._type;
	return *this;
}

void	WrongCat::makeSound(void) const {

	std::cout << "Wrong Meow !" << std::endl;
}