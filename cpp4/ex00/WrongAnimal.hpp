#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	
	protected:
		std::string	_type;
	
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & obj);
		WrongAnimal	&operator=(WrongAnimal const & obj);
		~WrongAnimal();
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif