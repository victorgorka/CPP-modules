#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const char *num);
		ScalarConverter(const ScalarConverter &copy);
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);

		// Methods
		static void	proccessInput(void);

	private:
		static std::string	_raw;
		static char			_character;
		static int			_integer;
		static float		_fNum;
		static double		_dNum;

		static int			_fail[4];
		static int			_size;
		enum
		{
			character,
			integer,
			floater,
			doubler
		} type;
};

#endif