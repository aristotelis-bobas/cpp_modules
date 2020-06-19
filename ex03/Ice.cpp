/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 22:52:56 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 23:31:06 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(Ice const &other): 
	AMateria("ice")
{
	(void)other;
}

Ice& Ice::operator = (Ice const &other)
{
	(void)other;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->AMateria::use(target);
}

Ice::~Ice()
{
}
