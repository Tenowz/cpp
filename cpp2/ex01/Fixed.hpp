#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <string>
# include <iostream>

class Fixed
{
private:
	int					_fix;
	static int const	_bits = 8;
public:
	Fixed();
	~Fixed();

	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &Fixed);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int 	toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif