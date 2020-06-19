/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:55:20 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:16:55 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::AWeapon(AWeapon const &other)
{
    *this = other;
}

AWeapon& AWeapon::operator = (AWeapon const &other)
{
    this->name = other.name;
    this->apcost = other.apcost;
    this->damage = other.damage;
	return (*this);
}

std::string AWeapon::getName() const
{
    return (this->name);
}

int AWeapon::getAPCost() const
{
    return (this->apcost);
}

int AWeapon::getDamage() const
{
    return (this->damage);
}

void AWeapon::setName(std::string name)
{
    this->name = name;
}

void AWeapon::setAPCost(int apcost)
{
    this->apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
    this->damage = damage;
}

AWeapon::~AWeapon()
{
}
