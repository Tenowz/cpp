#include "Replace.hpp"

Replace::Replace() {}

Replace::~Replace() {}

void	Replace::replace(std::string file, std::string s1, std::string s2) {

	size_t			pos;
	std::string		buff;
	std::ifstream	inFile(file.c_str());

	if (file.empty() || s1.empty() || s2.empty() || !inFile || (inFile.peek() == std::ifstream::traits_type::eof())) {

		std::cout << "Error !" << std::endl;
		return;
	}
	std::ofstream	outFile((file + ".replace").c_str());
	while (std::getline(inFile, buff)) {

		pos = 0;
        while ((pos = buff.find(s1, pos)) != std::string::npos) {

            buff.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outFile << buff << std::endl;
    }
	inFile.close();
	outFile.close();
}