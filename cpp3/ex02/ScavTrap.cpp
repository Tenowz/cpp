# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {

	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_name = "ScavTrap";
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	this->_hit = 100;
	this->_attack = 20;
	this->_energy = 50;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st) : ClapTrap(st) {

	std::cout << "Copy constructor called" << std::endl;
	*this = st;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &st) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_hit = st._hit;
	this->_name = st._name;
	this->_attack = st._attack;
	this->_energy = st._energy;
	return *this;
}

void	ScavTrap::attack(const std::string& target) {

	if (this->_energy > 0 && this->_hit > 0) {

		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack << " point(s) of damage" << std::endl;
		--this->_energy;
	} else
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
}

void	ScavTrap::guardGate() {

	if (this->_hit > 0)
		std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
}