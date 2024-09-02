#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	int			_hit;
	std::string _name;
	int			_attack;
	int			_energy;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &ct);
	ClapTrap &operator=(ClapTrap const &ct);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif