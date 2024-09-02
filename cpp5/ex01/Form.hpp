#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
	private:
		int const			_gradeEx;
		bool				_signed;
		int const			_grade;
		std::string const	_name;
	
	public:
		Form();
		Form(std::string name, int const grade, int const gradeEx);
		Form(Form const & f);
		Form	&operator=(Form const & f);
		~Form();

		std::string	getName(void) const;
		int			getGrade(void) const;
		bool		getSigned(void) const;
		int			getGradeEx(void) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		void	beSigned(Bureaucrat const & b);
};

std::ostream	&operator<<( std::ostream &o, Form const &i );

#endif