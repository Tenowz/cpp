#include "rpn.hpp"

bool	isValid(const std::string& str) {

	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        
		char c = *it;
        
		if ((c < '0' || c > '9') && c != ' ' && c != '+' && c != '-' && c != '*' && c != '/')
            return false;
    }
    return true;
}

int main(int ac, char **av) {

	if (ac != 2 || !av[1][0] || !isValid(av[1])) {

		std::cerr << "Error\n";
		return 1;
	}
	rpn calculator;

	try {

		std::cout << calculator.calc(av[1]) << std::endl;
	}
    catch (const std::exception& e) {

		std::cout << e.what() << std::endl;
	}
    return 0;
}