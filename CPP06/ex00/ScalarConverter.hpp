/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/01 18:23:15 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
	public:
		// Constructors
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);

		// Methods
		static void	convert(std::string raw);

	private:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);

		// Mehtods
		static void	checkIFD(void);

		// Attributes
		static std::string	_raw;
		static char			_character;
		static int			_integer;
		static float		_fNum;
		static double		_dNum;

		static int			_fail[4];
		static int			_size;
		static enum
		{
			character,
			integer,
			floater,
			doubler,
			indefer
		} type;
};

#endif
