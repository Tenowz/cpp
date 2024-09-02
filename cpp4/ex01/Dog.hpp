#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal {

	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(Dog const & d);
		Dog	&operator=(Dog const & d);
		~Dog();
		void	makeSound(void) const ;
		Brain	*getBrain(void) const;
};

#endif