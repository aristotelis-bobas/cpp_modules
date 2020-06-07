/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 23:17:01 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 23:56:16 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
{
}

Weapon::Weapon(char const *insert_weapon)
{
	type = std::string(insert_weapon);
}

void					Weapon::setType(char const *insert_weapon)
{
	type = std::string(insert_weapon);
}

const std::string&		Weapon::getType() const
{
	const std::string& reference = type;
	return (reference);
}	