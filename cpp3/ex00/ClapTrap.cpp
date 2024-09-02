#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit(10), _name("Claptrap"), _attack(0), _energy(10) {

	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit(10), _name(name), _attack(0), _energy(10) {

	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ct) {

	std::cout << "Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &ct) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_hit = ct._hit;
	this->_name = ct._name;
	this->_attack = ct._attack;
	this->_energy = ct._energy;
	return *this;
}

void    ClapTrap::attack(const std::string& target) {

	if (this->_energy > 0 && this->_hit > 0) {

		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack << " point(s) of damage" << std::endl;
		--this->_energy;
	} else
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hit > 0) {

		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damages" << std::endl;
		this->_hit -= amount;
	} else
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy > 0 && this->_hit > 0) {

		std::cout << "ClapTrap " << this->_name << " recovers " << amount << " hit(s) point(s)" << std::endl;
		this->_energy -= amount;
	} else
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
}