/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 14:46:29 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 15:49:03 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "\n\n" << std::endl;

	ISpaceMarine *test1 = new TacticalMarine;
	ISpaceMarine *test2 = new TacticalMarine;
	ISpaceMarine *test3 = new TacticalMarine;
	ISpaceMarine *test4 = new TacticalMarine;
	ISpaceMarine *test5 = new TacticalMarine;
	ISpaceMarine *test6 = new TacticalMarine;
	ISpaceMarine *test7 = new TacticalMarine;
	ISpaceMarine *test8 = new TacticalMarine;
	ISpaceMarine *test9 = new TacticalMarine;
	ISpaceMarine *test10 = new TacticalMarine;
	ISquad *TestSquad1 = new Squad;

	TestSquad1->push(test1);
	TestSquad1->push(test2);
	TestSquad1->push(test3);
	TestSquad1->push(test4);
	TestSquad1->push(test5);
	TestSquad1->push(test6);
	TestSquad1->push(test7);
	TestSquad1->push(test8);
	TestSquad1->push(test9);
	TestSquad1->push(test10);

	for (int i = 0; i < TestSquad1->getCount(); i++)
		TestSquad1->getUnit(i)->battleCry();
	
	delete TestSquad1;
}
