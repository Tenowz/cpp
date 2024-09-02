#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std::string _first;
	std::string	_last;
	std::string	_nick;
	std::string	_num;
	std::string	_secret;
public:
	Contact();
	~Contact();

	std::string	getFisrt(void);
	std::string	getLast(void);
	std::string	getNick(void);
	std::string	getNum(void);
	std::string	getSecret(void);

	void	setFirst(std::string first);
	void	setLast(std::string last);
	void	setNick(std::string nick);
	void	setNum(std::string num);
	void	setSecret(std::string secret);
};

#endif