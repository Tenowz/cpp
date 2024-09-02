#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <ctime>

class PmergeMe {

	public:

		std::list<unsigned int> lst;
		std::vector<unsigned int> vec;
	
		PmergeMe();
		PmergeMe(const PmergeMe& value);
		PmergeMe& operator=(const PmergeMe& value);
		~PmergeMe();

		void	sortList(int ac);
		void	sortVector(int ac);
};