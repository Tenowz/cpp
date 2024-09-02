#include "PhoneBook.hpp"

int		PhoneBook::_i = 0;

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add() {

	std::string	first;
	while (first.empty()) {

		std::cout << "first name : ";
		std::getline(std::cin, first);
	}
	this->_contact[this->_i % 8].setFirst(first);

	std::string	last;
	while (last.empty()) {

		std::cout << "last name : ";
		std::getline(std::cin, last);
	}
	this->_contact[this->_i % 8].setLast(last);

	std::string	nick;
	while (nick.empty()) {
		std::cout << "nick name : ";
		std::getline(std::cin, nick);
	}
	this->_contact[this->_i % 8].setNick(nick);

	std::string	num;
	while (num.empty()) {

		std::cout << "phone number : ";
		std::getline(std::cin, num);
	}
	this->_contact[this->_i % 8].setNum(num);
	
	std::string	secret;
	while (secret.empty()) {
		
		std::cout << "darkest secret : ";
		std::getline(std::cin, secret);
	}
	this->_contact[this->_i % 8].setSecret(secret);
	this->_i++;
}

void	PhoneBook::search() {

	int			i;
	int			ind;
	std::string	index;

	if (this->_contact[0].getFisrt().empty()
		&& this->_contact[0].getLast().empty()
		&& this->_contact[0].getNick().empty()
		&& this->_contact[0].getNum().empty()
		&& this->_contact[0].getSecret().empty()) {

		std::cout << "No contact registered !" << std::endl;
		return ;
	}
	i = -1;
	while (++i < 8) {

		if (this->_contact[i].getFisrt().empty()
			&& this->_contact[i].getLast().empty()
			&& this->_contact[i].getNick().empty()
			&& this->_contact[i].getNum().empty()
			&& this->_contact[i].getSecret().empty())
			break;
		std::cout << "|         " << i + 1 << "|";
		this->print( this->_contact[i].getFisrt() );
		this->print( this->_contact[i].getLast() );
		this->print( this->_contact[i].getNick() );
		std::cout << std::endl;
	}
	std::cout << "Enter a number : ";
	std::cin >> index;
	
	if (index.length() == 1 && index.at(0) >= '1' && index.at(0) <= '8') {

		ind = index[0] - '0' - 1;
		if (this->_contact[ind].getFisrt().empty()
			&& this->_contact[ind].getLast().empty()
			&& this->_contact[ind].getNick().empty()
			&& this->_contact[ind].getNum().empty()
			&& this->_contact[ind].getSecret().empty())
			std::cout << "Invalid number" << std::endl;
		else {

			std::cout << this->_contact[ind].getFisrt() << std::endl;
			std::cout << this->_contact[ind].getLast() << std::endl;
			std::cout << this->_contact[ind].getNick() << std::endl;
			std::cout << this->_contact[ind].getNum() << std::endl;
			std::cout << this->_contact[ind].getSecret() << std::endl;
		}
	} else
		std::cout << "Invalid number" << std::endl;
}

void	PhoneBook::print( std::string str ) {

	int		space;

	if (str.length() < 10) {

		space = 10 - str.length();
		for (int i = 0; i < space; i++)
			std::cout << " ";

	} else if (str.length() > 10) {

		str.resize(9);
		str.append(".");
	}
	std::cout << str << "|";
}