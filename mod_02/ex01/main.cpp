/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/14 15:50:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/16 14:31:54 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int		main()
{
	Fixed			a;
	Fixed const		b(10);
	Fixed const		c(42.42f);
	Fixed const		d(b);
	
	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// UNCOMMENT FOR CLOSER LOOK AT FIXED POINT NUMBERS AT BINARY LEVEL
	/*
	Fixed test1(0.8521f, true);
	Fixed test2(1.8521f, true);
	Fixed test3(10.8521f, true);
	Fixed test4(100.8521f, true);
	Fixed test5(1000.8521f, true);

	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout << test3 << std::endl;
	std::cout << test4 << std::endl;
	std::cout << test5 << std::endl;
	*/
}
