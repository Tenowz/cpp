#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie() {

	std::cout << "Destructor called" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}