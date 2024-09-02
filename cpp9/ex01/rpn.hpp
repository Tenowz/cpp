#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>

class	rpn {
	
	private:
		std::stack<int>	stk;
		
	public:
		rpn();
		rpn(const rpn& value);
		rpn&	operator=(const rpn& value);
		~rpn();

		int	calc(const std::string& str);
};

#endif