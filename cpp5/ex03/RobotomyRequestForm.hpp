#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
	
	private:
		std::string	_target;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(std::string target, int const grade, int const gradeEx);
		RobotomyRequestForm(RobotomyRequestForm const &self);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &self);
		~RobotomyRequestForm();

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif