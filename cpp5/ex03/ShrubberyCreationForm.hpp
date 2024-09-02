#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
	
	private:
		std::string	_target;
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(std::string, int grade, int gradeEx);
		ShrubberyCreationForm(ShrubberyCreationForm const &self);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &self);
		~ShrubberyCreationForm();

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif