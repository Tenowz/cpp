#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int		main(void) {

	const Animal* k = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	std::cout << "Animal's type is " << j->getType() << std::endl;
	std::cout << "Animal's type is " << i->getType() << std::endl;

	std::cout << std::endl;
	
	i->makeSound();
	j->makeSound();
	k->makeSound();

	std::cout << std::endl;

	delete k;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* w_j = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();

	std::cout << std::endl;

	w_j->makeSound();
	w_i->makeSound();

	std::cout << std::endl;

	delete w_j;
	delete w_i;

	return 0;
}