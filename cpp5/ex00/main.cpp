#include "Bureaucrat.hpp"

int main( void )
{
	try {
		
		Bureaucrat bureaucrat("Ash", 1);
		std::cout << bureaucrat << std::endl;
		bureaucrat.upGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {

		std::cerr << e.what() << std::endl;
	}
	
	try {

		Bureaucrat  bureaucrat("Bob", 150);
		std::cout << bureaucrat << std::endl;
		bureaucrat.downGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e) {

		std::cerr << e.what() << '\n';
	}

	return 0;
}