/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 22:58:17 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 23:30:36 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(Cure const &other): 
	AMateria("cure")
{
	(void)other;
}

Cure& Cure::operator = (Cure const &other)
{
	(void)other;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->AMateria::use(target);
}

Cure::~Cure()
{
}
