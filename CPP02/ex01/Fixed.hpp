#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &copy);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);

		// Methods
		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );
		float	toFloat ( void ) const;
		int		toInt ( void ) const;

	private:
		int					_rawBits;
		static const int	_fracc = 8;
};
std::ostream & operator<<(std::ostream &os, const Fixed &fix);
#endif