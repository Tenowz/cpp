#include "Intern.hpp"

Intern::Intern() {

	std::cout << "Intern constructor called !" << std::endl;
}

Intern::Intern(Intern const &self) {

	(void)self;
	std::cout << "Intern copy constructor called !" << std::endl;
}

Intern	&Intern::operator=(Intern const &self) {

	(void)self;
	std::cout << "Intern copy assignement called !" << std::endl;
	return *this;
}

Intern::~Intern() {

	std::cout << "Intern destructor called !" << std::endl;
}

const char	*Intern::internException::what() const throw() {

	return "Form not found !";
}

Form	*Intern::makeForm(std::string formName, std::string target) {

	int		i = -1;
	Form	*f = NULL;
	std::string	tab[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (++i < 3) {

		if (tab[i] == formName)
			break;
	}
	switch (i)
	{
	case 0:
		f = new ShrubberyCreationForm(formName);
		break;
	case 1:
		f = new RobotomyRequestForm(formName);
		break;
	case 2:
		f = new PresidentialPardonForm(formName);
		break;
	default:
		throw internException();
		break;
	}
	return f;
}