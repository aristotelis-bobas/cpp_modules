/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/22 21:14:48 by abobas        ########   odam.nl         */
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
			Bureaucrat steve("Steve", 30);
			std::cout << steve;
			for (int i = 0; i < 100; i++)
			{
				steve.promoteGrade();
				std::cout << steve;
			}
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
			Bureaucrat harry("Harry", 100);
			std::cout << harry;
			for (int i = 0; i < 100; i++)
			{
				harry.demoteGrade();
				std::cout << harry;
			}
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
			Form *pokemon;
			for (int i = 10; i >= 0; i--)
			{
				pokemon = new Form("pokemon card collection", (i * 3), i);
				std::cout << *pokemon;
				delete pokemon;
			}
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
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
