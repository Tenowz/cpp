#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <stdint.h>
# include <cstdlib>
# include <typeinfo>
# include <iostream>

struct Data {
	
	int			age;
	std::string	name;
};

class	Serialization {

	private:
		Serialization();

	public:
		Serialization(Serialization const &self);
		Serialization	&operator=(Serialization const &self);
		~Serialization();

		static uintptr_t	serialize(Data* data);
		static Data*			deserialize(uintptr_t data);
};

#endif