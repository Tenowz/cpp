#include "ScavTrap.hpp"

int main() {

	ClapTrap *c1 = new ClapTrap();
	ScavTrap *c2 = new ScavTrap("Zoro");
	ScavTrap *aux = new ScavTrap();
	ScavTrap *c3 = new ScavTrap(*aux);

	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Sanji");
	c3->attack("Slime shiny");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(50);
	c2->takeDamage(50);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	c2->guardGate();
	c3->guardGate();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete aux;
	delete c3;
}