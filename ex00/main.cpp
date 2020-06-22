/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/22 16:51:41 by abobas        ########   odam.nl         */
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
}
