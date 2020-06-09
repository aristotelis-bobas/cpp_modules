/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/08 23:57:41 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 01:17:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid argument" << std::endl;
		return (0);
	}
	std::string Find(av[2]);
	std::string Replace(av[3]);
	if (Find.length() < 1 || Replace.length() < 1)
	{
		std::cout << "Invalid argument" << std::endl;
		return (0);
	}
	std::ifstream FileIn(av[1], std::ios::in);
	if (!FileIn.is_open())
	{
		std::cout << "File does not exist" << std::endl;
		return (0);
	}
	std::ofstream FileOut(std::string (av[1]).append(".replace"), std::ios::out | std::ios::trunc);
	if (!FileOut.is_open())
	{
		std::cout << "Creating output file failed" << std::endl;
		return (0);
	}
	std::string	Line;
	while (FileIn.good())
	{
		std::getline(FileIn, Line);
		size_t Pos = Line.find(Find);
		while (Pos != std::string::npos)
		{
			Line.replace(Pos, Find.length(), Replace);
			Pos = Line.find(Find, Pos + Replace.length());
		}
		FileOut << Line;
		if (FileIn.good())
			FileOut << std::endl;
	}
	FileIn.close();
	FileOut.close();
}