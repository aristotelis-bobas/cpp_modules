/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 15:38:25 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 16:18:27 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min(a,b) << std::endl;
	std::cout << "max(a, b) = " << max(a,b) << std::endl;

	std::string c = "blabla";
	std::string d = "hahaha";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << min(c,d) << std::endl;
	std::cout << "max(c, d) = " << max(c,d) << std::endl;

	char e = 'G';
	char f = 'X';

	std::cout << "e = " << e << ", f = " << f << std::endl;
	swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, d) = " << min(e,f) << std::endl;
	std::cout << "max(e, d) = " << max(e,f) << std::endl;
}
