#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("Default") {

	this->setGrade(25);
	this->setGradeEx(5);
	std::cout << "PresidentialPardonForm constructor called !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target) {

	this->setGrade(25);
	this->setGradeEx(5);
	std::cout << "PresidentialPardonForm constructor called !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, int grade, int gradeEx) {

	this->_target = target;
	this->setGrade(grade);
	this->setGradeEx(gradeEx); 
	std::cout << "PresidentialPardonForm constructor called !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &self) : Form(self.getName(), self.getGrade(), self.getGradeEx()), _target(self.getTarget()) {

	std::cout << "PresidentialPardonForm copy constructor called !" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &self) {

	this->_target = self.getTarget();
	std::cout << "PresidentialPardonForm copy assignement called !" << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	std::cout << "PresidentialPardonForm destructor called !" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const {

	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (!this->getSigned() || executor.getGrade() > this->getGradeEx() || executor.getGrade() > this->getGrade())
		throw GradeTooLowException();
	
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}