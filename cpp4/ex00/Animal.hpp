#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {

	protected:
		std::string	_type;

	public:
		Animal();
		Animal(Animal const & obj);
		Animal	&operator=(Animal const & obj);
		virtual ~Animal();

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		void			setType(std::string newType);
};

#endif