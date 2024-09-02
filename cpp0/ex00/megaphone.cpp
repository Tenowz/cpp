#include <cctype>
#include <iostream>

int		main(int ac, char **av) {

	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {

		for (size_t i = 1; av[i]; i++) {

			std::string s = std::string(av[i]);

			for (size_t j = 0; j < s.length(); j++)
				std::cout << (char)std::toupper(s[j]);
		}
	}
	std::cout << std::endl;
	return 0;
}