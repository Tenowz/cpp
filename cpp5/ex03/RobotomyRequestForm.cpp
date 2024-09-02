#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _target("Default") {

	this->setGrade(72);
	this->setGradeEx(45);
	std::cout << "RobotomyRequestForm constructor called !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target) {

	this->setGrade(72);
	this->setGradeEx(45);
	std::cout << "RobotomyRequestForm constructor called !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, int grade, int gradeEx) {

	this->_target = target;
	this->setGrade(grade);
	this->setGradeEx(gradeEx); 
	std::cout << "RobotomyRequestForm constructor called !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &self) : Form(self.getName(), self.getGrade(), self.getGradeEx()), _target(self.getTarget()) {

	std::cout << "RobotomyRequestForm copy constructor called !" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &self) {

	this->_target = self.getTarget();
	std::cout << "RobotomyRequestForm copy assignement called !" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	std::cout << "RobotomyRequestForm destructor called !" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const {

	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (!this->getSigned() || executor.getGrade() > this->getGradeEx() || executor.getGrade() > this->getGrade())
		throw GradeTooLowException();
	
	std::cout << "*Drilling noises...*" << std::endl;
	srand(time(0));
	int		nbr = rand() % 100 + 1;
	if (nbr % 2)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else if (!(nbr % 2))
		std::cout << "Robotomy failed !" << std::endl;
}