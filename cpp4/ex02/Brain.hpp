#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# define NB 100

class Brain {
	
	private:
		std::string	*_ideas;

	public:
		Brain();
		Brain(Brain const & b);
		Brain	&operator=(Brain const & b);
		~Brain();
		std::string	*getIdeas(void) const;
};

#endif