#include "Harl.hpp"

int		main(void) {

	Harl my_harl;

	my_harl.complain("DEBUG");
	my_harl.complain("INFO");
	my_harl.complain("DEB");
	my_harl.complain("WARNING");
	my_harl.complain("ERROR");
	return 0;
}