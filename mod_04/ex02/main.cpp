/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 14:46:29 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 22:24:28 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{	{
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;
		ISquad *vlc = new Squad;

		vlc->push(bob);
		vlc->push(jim);
		
		for (int i = 0; i < vlc->getCount(); i++)
		{
			vlc->getUnit(i)->battleCry();
			vlc->getUnit(i)->rangedAttack();
			vlc->getUnit(i)->meleeAttack();
		}
	
		delete vlc;
	}

	std::cout << "\n\n" << std::endl;
	
	{
		ISquad *TestSquad = new Squad;
		
		for (int i = 0; i < 20; i++)
		{
			TestSquad->push(new TacticalMarine);
			TestSquad->push(new AssaultTerminator);
		}

		for (int i = 0; i < TestSquad->getCount(); i++)
		{
			TestSquad->getUnit(i)->battleCry();
			TestSquad->getUnit(i)->meleeAttack();
			TestSquad->getUnit(i)->rangedAttack();
		}
		
		delete TestSquad;
	}
	
	std::cout << "\n\n" << std::endl;
	
	{
		ISquad *TestSquad = new Squad;
		
		for (int i = 0; i < 5; i++)
		{
			TestSquad->push(new TacticalMarine);
			TestSquad->push(TestSquad->getUnit(i));
		}
		delete TestSquad;
	}

	std::cout << "\n\n" << std::endl;
	
	{
		Squad *TestSquad1 = new Squad;
		Squad *TestSquad2 = new Squad;
		
		std::cout << "Squad1:" << std::endl;
		for (int i = 0; i < 5; i++)
		{
			TestSquad1->push(new TacticalMarine);
		}
		
		std::cout << "Squad2:" << std::endl;
		*TestSquad2 = *TestSquad1;
		std::cout << "Squad3:" << std::endl;
		Squad TestSquad3(*TestSquad1);
		
		for (int i = 0; i < 5; i++)
		{
			TestSquad1->getUnit(i)->battleCry();
			TestSquad2->getUnit(i)->battleCry();
			TestSquad3.getUnit(i)->battleCry();
		}

		delete TestSquad1;
		delete TestSquad2;
		// TestSquad3 is local stack variable and destructor gets called automatically
	}
}
