#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(75) {

	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & b) {

	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & b) {

	std::cout << "Assignement operator called" << std::endl;
	this->_grade = b._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {

	std::cout << "Destructor called" << std::endl;
}

void	Bureaucrat::upGrade(void) {

	std::cout << "Upgrading " << this->_name << std::endl;
	if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void	Bureaucrat::downGrade(void) {

	std::cout << "Downgrading " << this->_name << std::endl;
	if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

int		Bureaucrat::getGrade(void) const {

	return this->_grade;
}

std::string	Bureaucrat::getName(void) const {

	return this->_name;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade is too High !");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade is too Low !");
}

void	Bureaucrat::signForm(Form & f) const {

	try
	{
		f.beSigned(*this);
		std::cout << "Form " << f.getName() << " signed by " << this->_name << " !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form " << f.getName() << " unable to be signed by " << this->_name << " due to " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form & form) const {

	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form " << form.getName() << " unable to be executed by " << this->_name << " due to " << e.what() << std::endl;
	}
	
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i) {

	o << i.getName();
	o << " grade is ";
	o << i.getGrade();
	return (o);
}