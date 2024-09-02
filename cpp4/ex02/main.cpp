#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

int		main(void) {

	AAnimal *zoo[4] = {new Cat(), new Cat(), new Dog(), new Dog()};

	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {

		std::cout << "Animal : " << zoo[i]->getType() <<  " : ";
		zoo[i]->makeSound();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete zoo[i];

	std::cout << std::endl;
	Cat	*k = new Cat();
	std::cout << std::endl;
	std::cout << "test copy"<< std::endl;
	Cat	l = (*k);
	std::cout << std::endl;
	std::cout << "test othercopy"<< std::endl;
	Cat	m(*k);
	std::cout << std::endl;
	std::cout << "test operator"<< std::endl;
	m = l;
	std::cout << std::endl;
	delete k;
	
	return (0);
}