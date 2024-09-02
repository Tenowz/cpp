#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
	
	private:
		std::string	_target;
		
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(std::string target, int grade, int gradeEx);
		PresidentialPardonForm(PresidentialPardonForm const &self);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &self);
		~PresidentialPardonForm();

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif