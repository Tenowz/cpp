#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>
# include <cfloat>
# include <climits>
# include <iostream>
# include <iomanip>
# include <cerrno>

class ScalarConverter {
	
	private:
		ScalarConverter();
	
	public:
		ScalarConverter(ScalarConverter const &self);
		ScalarConverter	&operator=(ScalarConverter const &self);
		~ScalarConverter();

		static void	convert(std::string s);
		static bool	isInt(std::string s);
		static bool	isFloat(std::string s);
		static bool	isDecimal(std::string s);
};

#endif