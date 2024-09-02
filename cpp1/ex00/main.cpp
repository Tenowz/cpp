#include "Zombie.hpp"

int		main(void) {

	Zombie	*pZombie;

	pZombie = new Zombie("foo");
	pZombie->announce();

	randomChump("bar");
	delete pZombie;
	return 0;
}