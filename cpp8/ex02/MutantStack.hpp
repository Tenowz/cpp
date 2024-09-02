#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <list>
# include <stack>
# include <vector>
# include <climits>
# include <numeric>
# include <iostream>
# include <iterator>
# include <algorithm>
# include <exception>
# include <functional>

template<typename T>
class MutantStack : public std::stack<T> {

	private:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack<T> &self) : std::stack<T>(self) {};
		MutantStack	&operator=(const MutantStack& self) {this->c = self.c; return *this;};
		~MutantStack(){}
		
		iterator	end(){return this->c.end();};
		iterator	rend(){return this->c.rend();};
		iterator	begin(){return this->c.begin();};
		iterator	rbegin(){return this->c.rbegin();};
		iterator	cend() const {return this->c.end();};
		iterator	crend() const {return this->c.rend();};
		iterator	cbegin() const {return this->c.begin();};
		iterator	crbegin() const {return this->c.rbegin();};
};

#endif