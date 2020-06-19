/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 14:20:44 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 15:15:47 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine():
	ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other):
	ISpaceMarine()
{
	(void)other;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

void TacticalMarine::operator = (TacticalMarine const &other)
{
	(void)other;
}

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}
