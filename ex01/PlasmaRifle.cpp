/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:06:06 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 22:06:20 by abobas        ########   odam.nl         */
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

void PlasmaRifle::operator = (PlasmaRifle const &other)
{
    this->setName(other.getName());
    this->setDamage(other.getDamage());
    this->setAPCost(other.getAPCost());
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
}
