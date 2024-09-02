#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

	std::cout << "ScalarConverter constructor called !" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &self) {

	*this = self;
	std::cout << "ScalarConverter copy constructor called !" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &self) {

	std::cout << "ScalarConverter copy assignement called !" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter() {

	std::cout << "ScalarConverter destructor called !" << std::endl;
}

void	ScalarConverter::convert(std::string s) {
	
	if (s[0] == '\0') {

		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
		std::cout << "float	: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		std::cout << "(type: non detected)" << std::endl;
		return ;
	}
	if (s == "+inf" || s == "+inff") {

		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
		std::cout << "float	: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		std::cout << "(detected type: special)" << std::endl;
		return;
	}
	if (s == "-inf" || s == "-inff") {
		
		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
		std::cout << "float	: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		std::cout << "(detected type: special)" << std::endl;
		return ;
	}
	if (s == "nan" || s == "nanf") {
		
		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
		std::cout << "float	: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		std::cout << "(detected type: special)" << std::endl;
		return ;
	}
	if (s[1] == '\0' && s[0] >= CHAR_MIN && !(s[0] >= '0' && s[0] <= '9')) {
		
		char c = s[0];
		if (c >= 32 && c <= 126)
			std::cout << "char	: '" << c << "' (detected type)" << std::endl;
		else
			std::cout << "char	: Non displayable (detected type)" << std::endl;
		std::cout << "int	: " << static_cast<int>(c) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "float : " << static_cast<float>(c) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double: " << static_cast<double>(c) << std::endl;
		return ;
	}
	char    *end;
	double  d = strtod(s.c_str(), &end);
	if (errno == ERANGE || (*end != '\0' && *end != 'f')) {
		
		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		std::cout << "(type non detected)" << std::endl;
		return ;
	}
	if (d >= INT_MIN && d <= INT_MAX && !ScalarConverter::isFloat(s) && !ScalarConverter::isDecimal(s)) {

		int i = std::atoi(s.c_str());
		if (d >= 32 && d <= 126 && ScalarConverter::isInt(s))
			std::cout << "char	: '" << static_cast<char>(i) << "'" << std::endl;
		else if (d >= CHAR_MIN && d <= CHAR_MAX && ScalarConverter::isInt(s))
			std::cout << "char	: Non displayable" << std::endl;
		else if ((d < CHAR_MIN || d > CHAR_MAX) && ScalarConverter::isInt(s))
			std::cout << "char	: out of range !" << std::endl;
		else
			std::cout << "char	: invalid conversion !" << std::endl;
		std::cout << "int	: " << i << " (detected type)" << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "float : " << static_cast<float>(i) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double: " << static_cast<double>(i) << std::endl;
		return ;
	}
	if (d >= FLT_MIN && d <= FLT_MAX && ScalarConverter::isFloat(s)) {
		
		float f = std::strtof(s.c_str(), NULL);
		if (d >= 32 && d <= 126 && ScalarConverter::isInt(s))
			std::cout << "char	: '" << static_cast<char>(f) << "'" << std::endl;
		else if (d >= CHAR_MIN && d <= CHAR_MAX && ScalarConverter::isInt(s))
			std::cout << "char	: Non displayable" << std::endl;
		else if ((d < CHAR_MIN || d > CHAR_MAX) && ScalarConverter::isInt(s))
			std::cout << "char	: out of range !" << std::endl;
		else
			std::cout << "char	: invalid conversion" << std::endl;
		if (d >= INT_MIN && d <= INT_MAX)
			std::cout << "int	: " << static_cast<int>(f) << std::endl;
		else
			std::cout << "int	: out of range !" << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "float : " << f << "f (detected type)" << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double: " << static_cast<double>(f) << std::endl;
		return ;
	}
	if (!ScalarConverter::isFloat(s)) {

		if (d >= 32 && d <= 126 && ScalarConverter::isInt(s))
			std::cout << "char	: '" << static_cast<char>(d) << "'" << std::endl;
		else if (d >= CHAR_MIN && d <= CHAR_MAX && ScalarConverter::isInt(s))
			std::cout << "char	: Non displayable" << std::endl;
		else if ((d < CHAR_MIN || d > CHAR_MAX) && ScalarConverter::isInt(s))
			std::cout << "char	: out of range !" << std::endl;
		else
			std::cout << "char	: invalid conversion" << std::endl;
		if (d >= INT_MIN && d <= INT_MAX)
			std::cout << "int	: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int	: out of range !" << std::endl;
		if (d >= -FLT_MAX && d <= FLT_MAX)
			std::cout << std::fixed << std::setprecision(2) << "float : " << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout << "float : out of range !" << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double: " << d << " (detected type)" << std::endl;
		return ;
	}
	std::cout << "char	: impossible" << std::endl;
	std::cout << "int	: impossible" << std::endl;
	std::cout << "float	: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	std::cout << "(type: non detected)" << std::endl;
}

bool	ScalarConverter::isFloat(std::string s) {
	
	int len;
	for (len = 0; s[len] != '\0'; len++);
	return (s[len - 1] == 'f');
}

bool	ScalarConverter::isDecimal(std::string s) {
	
	for (int i = 0; s[i] != '\0'; i++) 
	if (s[i] == '.')
		return true;
	return false;
}

bool	ScalarConverter::isInt(std::string s) {
	
	int i;

	if (!ScalarConverter::isDecimal(s))
		return true;
	for (i = 0; s[i] != '\0'; i++) ;
	i--;
	if (s[i] == 'f')
		i--;
	for (     ; s[i] != '.' ; i--)
		if (s[i] != '0')
			return false;
	return true;
}