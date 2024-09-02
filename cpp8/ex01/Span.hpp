#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>
# include <vector>
# include <climits>
# include <numeric>
# include <iostream>
# include <iterator>
# include <algorithm>
# include <exception>
# include <functional>

class Span : public std::vector<unsigned int> {
	
	private:
		unsigned int _N;
		unsigned int _min;
		unsigned int _max;
	
	public:
		Span(unsigned int N);
		Span(Span const &self);
		Span    &operator=(Span const &self);
		~Span();

		unsigned int	longestSpan() const;
		unsigned int	shortestSpan();
		void			addNumber(unsigned int n);
		void			addNumber(std::list<unsigned int>::const_iterator, std::list<unsigned int>::const_iterator);
};

#endif