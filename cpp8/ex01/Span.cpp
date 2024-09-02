#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _min(0), _max(0) {

	std::cout << "Span constructor called !" << std::endl;
}

Span::Span(Span const &self) {

	*this = self;
	std::cout << "Span copy constructor called !" << std::endl;
}

Span	&Span::operator=(Span const &self) {

	this->_N = self._N;
	this->_min = self._min;
	this->_max = self._max;
	std::cout << "Span copy assignement called !" << std::endl;
	return *this;
}

Span::~Span() {

	std::cout << "Span destructor called !" << std::endl;
}

void	Span::addNumber(unsigned int n) {

	if (this->size() >= n)
		throw std::overflow_error("No more free space !");
	this->push_back(n);
	if (this->size() == 1) {

		this->_min = n;
		this->_max = n;
	}
	else {

		if (this->_min > n)
			this->_min = n;
		if (this->_max < n)
			this->_max = n;
	}
}

void	Span::addNumber(std::list<unsigned int>::const_iterator begin, std::list<unsigned int>::const_iterator end) {
	
	if (this->size() + std::distance(begin, end) > _N)
		throw std::overflow_error("Span has no free space");
	
	unsigned int min = *std::min_element(begin, end);
	unsigned int max = *std::max_element(begin, end);
	
	if (min < this->_min)
		this->_min = min;

	if (this->_max < max)
		this->_max = max;

	this->insert(this->begin(), begin, end);
};

unsigned int	Span::longestSpan() const {

	if (this->size() < 2)
		throw std::exception();
	
	return this->_max - this->_min;
}

unsigned int Span::shortestSpan() {

	if(this->size() < 2)
		throw std::exception();

	std::vector<unsigned int> sorted = *this;
	std::sort(sorted.begin(), sorted.end());
	unsigned int	min = sorted[1] - sorted[0];
	for (std::vector<unsigned int>::iterator it = sorted.begin(); it != sorted.end(); it++) {

		unsigned int	tmp = *(it + 1) - *it;
		if (tmp < min && tmp >= 0)
			min = tmp;
	}
	return min;
}