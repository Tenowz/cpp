#include "PhoneBook.hpp"

int		main(void) {

	std::string	cmd;
	PhoneBook	rep;

	while (1) {

		std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
			rep.add();
		else if (!cmd.compare("SEARCH"))
			rep.search();
		else if (!cmd.compare("EXIT"))
			return 0;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}