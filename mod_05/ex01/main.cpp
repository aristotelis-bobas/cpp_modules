/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/26 14:16:56 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int main()
{
	{
		try
		{
			Form("Blabla", -100, 20);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Form("Blabla", 20, -100);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Form("Blabla", 1000, 20);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Form("Blabla", 20, -1000);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat joe("Joe", 85);
			Form taxes("taxes", 75, 75);
			std::cout << joe << taxes;
			for (int i = 0; i < 15; i++)
			{
				joe.promoteGrade();
				std::cout << joe;
				joe.signForm(taxes);
			}
			std::cout << joe << taxes;
			taxes.beSigned(joe);
			std::cout << joe << taxes;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
