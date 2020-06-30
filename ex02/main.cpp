/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 13:28:02 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 14:29:59 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate()
{
	int random = rand() % 3;

	if (random == 0)
	{
		std::cout << "Returned A" << std::endl;
		return (new A);
	}
	else if (random == 1)
	{
		std::cout << "Returned B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Returned C" << std::endl;
		return (new C);
	}
}

void identify_from_pointer(Base *p)
{
	Base* test;
	
	if ((test = dynamic_cast<A*>(p)) != 0)
		std::cout << "A" << std::endl;
	else if ((test = dynamic_cast<B*>(p)) != 0)
		std::cout << "B" << std::endl;
	else if ((test = dynamic_cast<C*>(p)) != 0)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	Base* test;
	
	if ((test = dynamic_cast<A*>(&p)) != 0)
		std::cout << "A" << std::endl;
	else if ((test = dynamic_cast<B*>(&p)) != 0)
		std::cout << "B" << std::endl;
	else if ((test = dynamic_cast<C*>(&p)) != 0)
		std::cout << "C" << std::endl;
}

int main()
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{	Base *ptr = generate();
		identify_from_pointer(ptr);
		identify_from_reference(*ptr);
		delete ptr;
		std::cout << std::endl;
	}
		
}
