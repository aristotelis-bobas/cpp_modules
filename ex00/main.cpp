/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:57:49 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/21 15:05:09 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
			
		std::cout << robert << jim << joe;
			
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	
	std::cout << std::endl;
	
	{
	    Sorcerer michael("Michael", "Jackson");
	    Victim harry("Harry");
	    Peon amber("Amber");
	
	    std::cout << michael << harry << amber;
		std::cout << "Sorcerer name: " << michael.getName() << std::endl;
		std::cout << "Victim name: " << harry.getName() << std::endl;
		std::cout << "Peon name: " << amber.getName() << std::endl;
		
	    michael.polymorph(harry);
		harry.getPolymorphed();
	    michael.polymorph(amber);
		amber.getPolymorphed();
	}
}
