#include "Zombie.hpp"

Zombie::Zombie() {

	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie() {

	std::cout << "Destructor called" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {

	this->_name = name;
}