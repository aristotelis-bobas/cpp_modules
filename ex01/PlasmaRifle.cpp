/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:06:06 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:18:34 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include <iostream>
#include <string>

PlasmaRifle::PlasmaRifle(): 
    AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other): 
    AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{
}

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const &other)
{
    this->setName(other.getName());
    this->setDamage(other.getDamage());
    this->setAPCost(other.getAPCost());
	return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
}
