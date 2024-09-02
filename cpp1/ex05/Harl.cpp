#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::_debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void ) {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {

	int			i = 0;
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*pMsg[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	while (i < 4 && tab[i].compare(level))
		i++;
	if (i < 4) {
		
		void	(Harl::*msg)() = pMsg[i];
		(this->*msg)();
	}
}