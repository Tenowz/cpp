#include "rpn.hpp"

rpn::rpn() {

    std::cout << "rpn constructor called !" << std::endl;
}

rpn::rpn(const rpn &value) : stk(value.stk) {

    std::cout << "rpn copy constructor called!" << std::endl;
}


rpn &rpn::operator=(const rpn &self) {

	std::cout << "rpn copy assignement called!" << std::endl;
	
	if (this != &self)
    	this->stk = self.stk;

	return *this;
}

rpn::~rpn() {

    std::cout << "rpn destructor called !" << std::endl;
}

int strToInt(const std::string& str) {

	return str[0] - '0';
}

int rpn::calc(const std::string& str) {

	std::string         curr;
	std::stringstream   ss(str);
	int                 a, b, res;

	while (ss >> curr) {

		if (curr == "/" || curr == "*" || curr == "-" || curr == "+") {

			if (stk.size() < 2)
				throw std::runtime_error("Error");

			b = this->stk.top();
			this->stk.pop();
			a = this->stk.top();
			this->stk.pop();

			switch (curr.at(0)) {
                
				case '+':
					res = a + b ; break;
				case '-':
					res = a - b ; break;
				case '*':
					res = a * b ; break;
				case '/':
					
					if (b != 0)
						res = a / b;
					
					else
						throw std::runtime_error("Error");
					
					break;
			}
			this->stk.push(res);
		}
		else
			this->stk.push(strToInt(curr));
	}
	if (stk.size() != 1)
		throw std::runtime_error("Error");

	return this->stk.top();
}