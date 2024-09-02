#include "Serialization.hpp"

Serialization::Serialization() {

	std::cout << "Serialization constructor called !" << std::endl;
}

Serialization::Serialization(Serialization const &self) {

	*this = self;
	std::cout << "Serialization copy constructor called !" << std::endl;
}

Serialization	&Serialization::operator=(Serialization const &self) {

	std::cout << "Serialization copy assignment called !" << std::endl;
	return *this;
}

Serialization::~Serialization() {

	std::cout << "Serialization desstructor called !" << std::endl;
}

uintptr_t	Serialization::serialize(Data* data) {

	return (reinterpret_cast<uintptr_t>(data));
}

Data	*Serialization::deserialize(uintptr_t data) {

	return (reinterpret_cast<Data *>(data));
}