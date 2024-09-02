#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public:
		WrongCat();
		WrongCat(WrongCat const & c);
		WrongCat	&operator=(WrongCat const & c);
		~WrongCat();
		void	makeSound(void) const;
};

#endif