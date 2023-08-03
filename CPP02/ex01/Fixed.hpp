/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:26:24 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:26:25 by vde-prad         ###   ########.fr       */
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