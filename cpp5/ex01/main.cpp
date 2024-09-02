#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try
	{
		Form		c1("pinard 5ans d'age", 15, 1);
		Form		c2("pinard 10 ans d'age", 51, 1);
		Bureaucrat  sean("Gerard depardieux", 50);
		
		std::cout << sean << std::endl;
		std::cout << c1 << std::endl;
		std::cout << c2 << std::endl;

		sean.signForm(c2);
		c2.beSigned(sean);

		std::cout << c1 << std::endl;
		std::cout << c2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}