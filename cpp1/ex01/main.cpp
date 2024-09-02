#include "Zombie.hpp"
#define N 10

int		main(void) {

	Zombie	*horde = zombieHorde(N, "horde");

	for (size_t i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}