#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
	int					_fix;
	static int const	_bits = 8;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &Fixed);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif