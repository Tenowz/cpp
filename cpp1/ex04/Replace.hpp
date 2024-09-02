#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>
# include <iostream>
# include <filesystem>

class Replace
{
private:

public:
	Replace();
	~Replace();

	void	replace(std::string file, std::string s1, std::string s2);
};

#endif