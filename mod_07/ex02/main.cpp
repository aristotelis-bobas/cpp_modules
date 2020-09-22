/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 17:42:27 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 18:30:36 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	{
		try
		{
			Array<int> test(20);
			std::cout << "Array size: " << test.size() << "\n" << std::endl;

			for (int i = 0; i < 20; i++)
				test[i] = 3;
	
			for (int i = 0; i < 21; i++)
				std::cout << "Array[" << i << "]: " << test[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Array<int> test(20);
			std::cout << test[-64] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
