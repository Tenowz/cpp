#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {

	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(AAnimal const & a);
		virtual AAnimal	&operator=(AAnimal const & a);
		virtual	~AAnimal();
		virtual std::string		getType(void) const;
		virtual void			makeSound(void) const = 0;
		virtual void			setType(std::string newType);
};

#endif