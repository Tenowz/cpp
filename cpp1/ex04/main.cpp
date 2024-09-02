#include "Replace.hpp"

int		main(int ac, char **av) {

	Replace	file;

	if (ac != 4)
		std::cout << "Error !" << std::endl;
	else
		file.replace(av[1], av[2], av[3]);
	return 0;
}