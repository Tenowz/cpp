#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	ShrubberyOK()
{
	Bureaucrat bob("bob", 1);
	ShrubberyCreationForm home("Home", 145, 137);
	try 
	{
		bob.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ShrubberyKO()
{
	Bureaucrat bob("bob", 138);
	ShrubberyCreationForm home("Home", 145, 137);
	try 
	{
		bob.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.upGrade();
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	RobotomyOK()
{
	Bureaucrat jim("jim", 72);
	Bureaucrat bob("bob", 45);
	RobotomyRequestForm home("Home", 72, 45);
	try 
	{
		jim.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	RobotomyKO()
{
	Bureaucrat jim("jim", 148);
	RobotomyRequestForm home("Home", 72, 45);
	try 
	{
		jim.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	PresidentialOK()
{
	Bureaucrat jim("jim", 5);
	PresidentialPardonForm home("Home", 25, 5);
	try 
	{
		jim.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "=========================" << std::endl;
	ShrubberyOK();
	std::cout << "=========================" << std::endl;
	ShrubberyKO();
	std::cout << "=========================" << std::endl;
	RobotomyKO();
	std::cout << "=========================" << std::endl;
	RobotomyOK();
	std::cout << "=========================" << std::endl;
	PresidentialOK();
	std::cout << "=========================" << std::endl;

	return 0;
}