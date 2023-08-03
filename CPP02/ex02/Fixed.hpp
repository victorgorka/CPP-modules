/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:27:34 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:27:35 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		bool	operator>(const Fixed &f2);
		bool	operator<(const Fixed &f2);
		bool	operator>=(const Fixed &f2);
		bool	operator<=(const Fixed &f2);
		bool	operator==(const Fixed &f2);
		bool	operator!=(const Fixed &f2);
		Fixed	&operator+(const Fixed &f2);
		Fixed	&operator-(const Fixed &f2);
		Fixed	&operator*(const Fixed &f2);
		Fixed	&operator/(const Fixed &f2);
		Fixed	&operator++();
		Fixed	operator++(int);

		// Methods
		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );
		float	toFloat ( void ) const;
		int		toInt ( void ) const;
		static			Fixed &min(Fixed &f1, Fixed &f2);
		static const	Fixed &min(const Fixed &f1, const Fixed &f2);
		static			Fixed &max(Fixed &f1, Fixed &f2);
		static const	Fixed &max(const Fixed &f1, const Fixed &f2);

	private:
		int					_rawBits;
		static const int	_fracc = 8;
};

std::ostream & operator<<(std::ostream &os, const Fixed &fix);

#endif