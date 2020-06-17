/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/17 19:01:34 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/17 22:08:16 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string const name)
{
    this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_damage = 20;
	this->ranged_damage = 15;
	this->armor_reduction = 3;
	this->alive = true;
	this->type = std::string("SC4V-TP");
	std::cout << this->getTypeName() << ": 'Let's get this party started!'" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	*this = other;
}

void ScavTrap::operator = (ScavTrap const &other)
{
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->melee_damage = other.melee_damage;
	this->ranged_damage = other.ranged_damage;
	this->armor_reduction = other.armor_reduction;
	this->alive = other.alive;
	if (this->alive == true)
		std::cout << this->getTypeName() << ": 'Let's get this party started!'" << std::endl;
}

std::string ScavTrap::getTypeName()
{
	return (this->type.substr().append(" ").append(this->name));
}

void ScavTrap::rangedAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Step right up, to the Bulletnator 9000!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " shoots its minigun at " << target << ", causing ";
		std::cout << this->ranged_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void ScavTrap::meleeAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Take that!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " hits " << target << " from up close, causing ";
		std::cout << this->melee_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage_dealt = (int)amount - this->armor_reduction;

	if (damage_dealt < 0)
		damage_dealt = 0;
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Ow hohoho, that hurts! Yipes!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " is dealt " << damage_dealt << " points of damage>" << std::endl;
		this->hit_points -= damage_dealt;
		if (this->hit_points <= 0)
		{
			std::cout << this->getTypeName() << ": 'Argh arghargh death gurgle gurglegurgle urgh... death.'" << std::endl;
			std::cout << "<" << this->getTypeName() << " has been destroyed in combat>" << std::endl;
			this->alive = false;
			this->hit_points = 0;
		}
		else
			std::cout << "<" << this->getTypeName() << " hit points are now " << this->hit_points << ">" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " already is a pile of junk>" << std::endl;
	}		
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Sweet life juice!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " gets repaired for " << amount << " hit points>" << std::endl;
		this->hit_points += amount;
		if (this->hit_points > this->max_hit_points)
			this->hit_points = this->max_hit_points;
		std::cout << "<" << this->getTypeName() << " hit points are now " << this->hit_points << ">" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " is beyond repairable>" << std::endl;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->getTypeName() << " is now lost forever>" << std::endl;
}
