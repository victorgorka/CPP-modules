#include <iostream>

void	ft_uppercase(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout << (char)std::toupper(argv[i][j]);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argc > 1)
		ft_uppercase(argc, argv);
	std::cout << std::endl;
	return (0);
}