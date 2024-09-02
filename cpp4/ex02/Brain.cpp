#include "Brain.hpp"

Brain::Brain() {

	this->_ideas = new std::string[NB];
	for (int i = 0; i < NB; i++)
		this->_ideas[i] = "ideas";

	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & b) {

	std::cout << "Brain copy constructor called" << std::endl;
	*this = b;
}

Brain	&Brain::operator=(Brain const & b) {

	std::cout << "Brain copy assignement called" << std::endl;

	if (this->_ideas)
		delete [] this->_ideas;
	this->_ideas = new std::string[NB];
	for (int i = 0; i < NB; i++)
		this->_ideas[i] = b._ideas[i];

	return *this;
}

Brain::~Brain() {

	delete [] this->_ideas;
	std::cout << "Brain destructor called" << std::endl;
}

std::string	*Brain::getIdeas(void) const {

	return this->_ideas;
}