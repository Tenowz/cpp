#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &st);
	ScavTrap &operator=(ScavTrap const &st);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif