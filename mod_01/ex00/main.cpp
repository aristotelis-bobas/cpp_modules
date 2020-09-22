/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 21:54:26 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 10:58:22 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	PonyOnTheStack(void)
{
	Pony	Pony("Stack");

	Pony.eat("carrots");
	std::cout << "Leaving PonyOnTheStack function" << std::endl;
}

void	PonyOnTheHeap(void)
{
	Pony	*Pony;
	
	Pony = new class Pony("Heap");
	Pony->eat("carrots");
	delete Pony;
	std::cout << "Leaving PonyOnTheHeap function" << std::endl;
}

int		main(void)
{
	PonyOnTheStack();
	PonyOnTheHeap();
	return (0);
}
