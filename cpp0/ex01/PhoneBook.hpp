#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	static int	_i;
	Contact		_contact[8];
public:
	PhoneBook();
	~PhoneBook();

	void	add();
	void	search();
	void	print( std::string str );
};

#endif