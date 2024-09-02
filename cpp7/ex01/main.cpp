#include "iter.hpp"

class Awesome {
	
	public:
		Awesome( void ) : _n( 42 ) { return; };
		int get( void ) const { return this->_n;};
	
	private:
		int _n;
};

std::ostream	&operator<<( std::ostream & o, Awesome const & rhs ) {
	
	o << rhs.get();
	return o;
}

template< typename T > 
void	print( T& x ) {
	
	std::cout << x << std::endl;
}

int		main(void) {
	
	int		tab1[] = { 65, 66, 67, 68, 69 };
	Awesome	tab2[5];

	iter(tab1, 5, print<char const>);
	iter(tab2, 5, print<Awesome const>);
	return 0;
}