#include "Form.hpp"

Form::Form() : _name("Default"), _grade(75), _signed(false), _gradeEx(10) {

	std::cout << "Constructor called" << std::endl;
}

Form::Form(std::string name, int const grade, int const gradeEx) : _name(name), _grade(grade), _gradeEx(gradeEx) {

	std::cout << "Constructor called" << std::endl;
}

Form::Form(Form const & f) : _name(f._name), _grade(f._grade), _signed(f._signed), _gradeEx(f._gradeEx) {

	std::cout << "Copy constructor called" << std::endl;
}

Form	&Form::operator=(Form const & f) {

	std::cout << "Assignement operator called" << std::endl;
	this->_signed = f._signed;
	return *this;
}

Form::~Form() {

	std::cout << "Destructor called" << std::endl;
}

std::string	Form::getName(void) const {

	return this->_name;
}

int		Form::getGrade(void) const {

	return this->_grade;
}

bool	Form::getSigned(void) const {

	return this->_signed;
}

int		Form::getGradeEx(void) const {

	return this->_gradeEx;
}

const char	*Form::GradeTooHighException::what() const throw() {

	return "Grade too high !";
}

const char	*Form::GradeTooLowException::what() const throw() {

	return "Grade too low !";
}

void	Form::beSigned(Bureaucrat const & b) {

	if (b.getGrade() > this->_grade)
		throw GradeTooLowException();
	if (this->_signed != true)
		this->_signed = true;
}

std::ostream	&operator<<(std::ostream& o, const Form& f) {

    o << "Form name: " << f.getName() << std::endl << "Grade to sign: " << f.getSigned() << std::endl << "Grade to execute: " << f.getGradeEx();
    return o;
}