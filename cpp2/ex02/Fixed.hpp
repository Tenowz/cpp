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
	Fixed &operator=(Fixed const &fixed);

	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;

	Fixed operator+(const Fixed& fixed) const;
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed) const;

	Fixed& operator++();
	Fixed& operator--();

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int 	toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif