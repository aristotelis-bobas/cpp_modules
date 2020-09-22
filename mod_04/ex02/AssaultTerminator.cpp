/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 14:29:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:24:53 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator():
	ISpaceMarine()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other):
	ISpaceMarine()
{
	(void)other;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator = (AssaultTerminator const &other)
{
	(void)other;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}
