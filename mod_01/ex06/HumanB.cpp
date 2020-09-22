/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 23:23:49 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/08 00:13:11 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(char const *insert_name)
{
	name = std::string(insert_name);
}

void	HumanB::setWeapon(Weapon& insert_weapon)
{
	weapon = &insert_weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
