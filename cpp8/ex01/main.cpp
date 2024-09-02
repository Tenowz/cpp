#include "Span.hpp"
#include <list>
#include <vector>
#include <string>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

int main(void) {

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(9);
	sp.addNumber(17);
	sp.addNumber(11);

	std::cout << "Longest span	: " << sp.longestSpan() << std::endl;
	std::cout << "Shortest span	: " << sp.shortestSpan() << std::endl;

	try {
		std::list<unsigned int>	li(12000);
		std::srand(time(NULL));
		std::generate(li.begin(), li.end(), std::rand);

		Span span(li.size());

		span.addNumber(li.begin(), li.end());

		std::cout << "Longest span	: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span	: " << span.shortestSpan() << std::endl;
		
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}