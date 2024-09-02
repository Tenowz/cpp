#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {

	this->_hit = 100;
	this->_attack = 30;
	this->_energy = 100;
	this->_name = "FragTrap";
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	this->_hit = 100;
	this->_attack = 30;
	this->_energy = 100;
	this->_name = name;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ft) : ClapTrap(ft) {

	std::cout << "Copy constructor called" << std::endl;
	*this = ft;
}

FragTrap    &FragTrap::operator=(FragTrap const &ft) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_hit = ft._hit;
	this->_name = ft._name;
	this->_attack = ft._attack;
	this->_energy = ft._energy;
	return *this;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {

	if (this->_energy > 0 && this->_hit > 0) {

		std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attack << " point(s) of damage" << std::endl;
		--this->_energy;
	} else
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
}

void	FragTrap::highFivesGuys(void) {

	if (this->_hit > 0)
		std::cout << "FragTrap " << this->_name << " high fives guys" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
}