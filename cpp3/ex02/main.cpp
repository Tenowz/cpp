#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	ScavTrap *c1 = new ScavTrap();
	FragTrap *c2 = new FragTrap("Zoro");
	FragTrap *aux = new FragTrap();
	FragTrap *c3 = new FragTrap(*aux);

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

	c1->guardGate();
	c2->highFivesGuys();
	c3->highFivesGuys();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete aux;
	delete c3;

	return 0;
}