#include "Base.hpp"

Base *generate(void) {
	
	int random;
	srand(time(NULL));
	random = rand() % 3;

	if (random == 0) {
		
		std::cout << "generate:  A instance created" << std::endl;
		return (new A());
	}
	if (random == 1) {
		
		std::cout << "generate:  B instance created" << std::endl;
		return (new B());
	}
	if (random == 2) {
		
		std::cout << "generate:  C instance created" << std::endl;
		return (new C());
	}
	return (NULL);
}

void identify(Base *p) {
	
	std::cout << "Using a pointer:" << std::endl;

	if (dynamic_cast<A*>(p))
		std::cout << "Pointer:   A instance detected" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer:   B instance detected" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer:   C instance detected" << std::endl;
	else
		std::cout << "Pointer:   no instance found" << std::endl;
}

void identify(Base &p) {

	std::cout << "Using a reference:" << std::endl;
	if (dynamic_cast<A*>(&p))
		std::cout << "Reference: It is a class A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Reference: it is a class B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Reference: It is a class C" << std::endl;
	else
		std::cout << "Reference: no instance found" << std::endl;
	try {
		A& ref = dynamic_cast<A&>(p);
		(void)ref;
		std::cout << "Reference: A instance detected" << std::endl;
		return ;
	} catch (...) {}
	try {
		B& ref = dynamic_cast<B&>(p);
		(void)ref;
		std::cout << "Reference: B instance detected" << std::endl;
		return ;
	} catch (...) {}
	try {
		C& ref = dynamic_cast<C&>(p);
		(void)ref;
		std::cout << "Reference: C instance detected" << std::endl;
		return ;
	} catch (...) {}
	std::cout << "Reference: It is not a A, B or C instance" << std::endl;
}

int main() {
	
	Base *base = generate();
	if (base == NULL) {
		std::cout << "malloc error" << std::endl;
		return (1);
	}
	identify(base);
	identify(*base);
	delete base;
	return (0);
}