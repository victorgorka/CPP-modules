/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/02 22:07:11 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class ScalarConverter
{
	public:
		// Methods
		static void	convert(std::string raw);

	private:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);

		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);

		// Mehtods
		static void	checkIFD(void);
		static void	checkDoublerFloater(int &i);
		static void	cast(void);

		// Attributes
		static std::string	_raw;
		static char			_character;
		static int			_integer;
		static float		_fNum;
		static double		_dNum;

		static bool			_fail[4];
		static int			_size;
		enum Type
		{
			character,
			integer,
			floater,
			doubler,
			indefer
		};
		static Type type;
};

#endif
