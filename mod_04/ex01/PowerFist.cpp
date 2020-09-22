/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:20:59 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:19:10 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <iostream>
#include <string>

PowerFist::PowerFist(): 
    AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &other): 
    AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{
}

PowerFist& PowerFist::operator = (PowerFist const &other)
{
    this->setName(other.getName());
    this->setDamage(other.getDamage());
    this->setAPCost(other.getAPCost());
	return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
}
