/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 16:20:45 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 18:43:57 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
void iter(T *array, size_t length, void (*f)(T))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void print(T element)
{
	std::cout << element << std::endl;
}

int main()
{
	{
		char array[7] = {"hahaha"};
		iter(array, 7, &print);
		std::cout << std::endl;
	}
	{
		int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
		iter(array, 10, &print);
		std::cout << std::endl;
	}
	{
		double array[8] = {1.99, 64.646, 3.837, 98.73, 8543.332, 543.343, 742.235, 225.234};
		iter(array, 8, &print);
		std::cout << std::endl;
	}
}

