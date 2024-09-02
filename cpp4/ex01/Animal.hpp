#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal {

	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & a);
		Animal	&operator=(Animal const & a);
		virtual ~Animal();

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		void			setType(std::string newType);
};

#endif