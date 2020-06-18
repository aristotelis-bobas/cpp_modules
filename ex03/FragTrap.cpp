/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:50:38 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 17:59:54 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_damage = 30;
	this->ranged_damage = 20;
	this->fire_damage = 25;
	this->cryo_damage = 20;
	this->explosive_damage = 35;
	this->armor_reduction = 5;
	this->alive = true;
	this->type = std::string("FR4G-TP");
	std::cout << this->getTypeName() << ": 'Recompiling my combat code!'" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other.name)
{
	*this = other;
}

void FragTrap::operator = (FragTrap const &other)
{
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->melee_damage = other.melee_damage;
	this->ranged_damage = other.ranged_damage;
	this->fire_damage = other.fire_damage;
	this->cryo_damage = other.cryo_damage;
	this->explosive_damage = other.explosive_damage;
	this->armor_reduction = other.armor_reduction;
	this->alive = other.alive;
	if (this->alive == true)
		std::cout << this->getTypeName() << ": 'Recompiling my combat code!'" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int number = rand() % 5;
	
	if (this->energy_points >= 25)
	{
		this->energy_points -= 25;
		if (number == 0)
			this->rangedAttack(target);
		else if (number == 1)
			this->meleeAttack(target);
		else if (number == 2)
			this->fireAttack(target);
		else if (number == 3)
			this->cryoAttack(target);
		else if (number == 4)
			this->explosiveAttack(target);
		std::cout << "<" << this->getTypeName() << " energy points are now " << this->energy_points << ">" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " is out of energy points>" << std::endl;	
	}
}

void FragTrap::rangedAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!'" << std::endl;
		ClapTrap::rangedAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void FragTrap::fireAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Burn, baby, burn!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " uses its flamethrower on " << target << ", causing ";
		std::cout << this->fire_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void FragTrap::explosiveAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Bad guy go boom!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " throws a grenade at " << target << ", causing ";
		std::cout << this->explosive_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void FragTrap::cryoAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Freezy peezy!'" << std::endl;
		std::cout << "<" << this->getTypeName() << " freezes " << target << ", causing ";
		std::cout << this->cryo_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void FragTrap::meleeAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'F to the R to the 4 to the G to the WHAAT!'" << std::endl;
		ClapTrap::meleeAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "<" << this->getTypeName() << " gets recycled>" << std::endl;
}
