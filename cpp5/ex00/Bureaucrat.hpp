#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
	
	private:

		std::string const	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & b);
		Bureaucrat	&operator=(Bureaucrat const & b);
		~Bureaucrat();

		void		upGrade(void);
		void		downGrade(void);
		int			getGrade(void) const;
		std::string	getName(void) const;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i );

#endif