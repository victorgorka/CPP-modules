/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:49 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:44:50 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <ios>
#include <string>

void	ft_replace(std::string inf, std::string s1, std::string s2)
{
	size_t				i;
	std::string		sentence;
	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(inf, std::ios::in);
	if (!infile)
		return ;
	outfile.open(inf +  ".replace", std::ios::out | std::ios::trunc);
	while (std::getline(infile, sentence))
	{
		i = sentence.find(s1, 0);
		if (i == std::string::npos)
			outfile << sentence;
		else
		{
			outfile << sentence.substr(0, i);
			outfile << s2;
			outfile << sentence.substr(i + s1.size());
		}
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
}

int	main(int argc, char **argv)
{
	std::string		inf, s1, s2;

	if (argc != 4)
	{
		std::cout << "arguments: <filePath> <s1> <s2>" << std::endl;
		return (0);
	}
	inf = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ft_replace(inf, s1, s2);
}
