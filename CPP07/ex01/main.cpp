#include "Iter.hpp"

void	ft_uppercase(char &character)
{
	std::cout << (char)std::toupper(character);
}

int main(void)
{
	char s[] = "hola Mundo";
	::iter(s, std::strlen(s), &ft_uppercase);
	return 0;
}