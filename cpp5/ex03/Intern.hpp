#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern {
	
	private:
		
		
	public:
		Intern();
		Intern(Intern const &self);
		Intern	&operator=(Intern const &self);
		~Intern();

		Form	*makeForm(std::string formName, std::string target);

		class	internException : public std::exception {
			public:
				const char	*what() const throw();
		};
};

#endif