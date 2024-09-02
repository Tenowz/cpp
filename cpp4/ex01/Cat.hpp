#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal {

	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(Cat const & c);
		Cat	&operator=(Cat const & c);
		~Cat();
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif