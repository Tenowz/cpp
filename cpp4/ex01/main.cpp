#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int		main(void) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	const Animal tmp = *i;

	std::cout << std::endl;

	delete j;
	delete i;

	std::cout << std::endl;

	Animal* animals[10] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {

		std::cout << "Animal " << i + 1 << " : ";
		animals[i]->makeSound();
		delete animals[i];
		std::cout << std::endl;
	}
	return (0);
}