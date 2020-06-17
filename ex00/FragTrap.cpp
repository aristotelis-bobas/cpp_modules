/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:50:38 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/16 23:59:01 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string const name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_damage = 30;
	this->ranged_damage = 20;
	this->armor_reduction = 5;
	this->alive = true;
	std::cout << "FR4G-TP " << this->name << ": 'Recompiling my combat code!'" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
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
	this->armor_reduction = other.armor_reduction;
	this->alive = other.alive;
	if (this->alive == true)
		std::cout << "FR4G-TP " << this->name << ": 'Recompiling my combat code!'" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << "FR4G-TP " << this->name << ": 'Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!'" << std::endl;
		std::cout << "<FR4G-TP " << this->name << " attacks " << target << " at range, causing ";
		std::cout << this->ranged_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<FR4G-TP " << this->name << " has stopped functioning>" << std::endl;
	}
	
}

void FragTrap::meleeAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << "FR4G-TP " << this->name << ": 'F to the R to the 4 to the G to the WHAAT!'" << std::endl;
		std::cout << "<FR4G-TP " << this->name << " attacks " << target << " from up close, causing ";
		std::cout << this->melee_damage << " points of damage>" << std::endl;
	}
	else
	{
		std::cout << "<FR4G-TP " << this->name << " has stopped functioning>" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage_dealt = amount - this->armor_reduction;

	if (this->alive == true)
	{
		std::cout << "FR4G-TP " << this->name << ": 'Ow hohoho, that hurts! Yipes!'" << std::endl;
		std::cout << "<FR4G-TP " << this->name << " is dealt " << damage_dealt << " points of damage>" << std::endl;
		this->hit_points -= damage_dealt;
		if (this->hit_points < 0)
			this->~FragTrap();
		else
			std::cout << "<FR4G-TP " << this->name << " hit points are now " << this->hit_points << ">" << std::endl;
	}
	else
	{
		std::cout << "<FR4G-TP " << this->name << " already is a pile of junk>" << std::endl;
	}		
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->alive == true)
	{
		std::cout << "FR4G-TP " << this->name << ": 'Sweet life juice!'" << std::endl;
		std::cout << "<FR4G-TP " << this->name << " gets repaired for " << amount << " hit points>" << std::endl;
		this->hit_points += amount;
		if (this->hit_points > this->max_hit_points)
			this->hit_points = this->max_hit_points;
		std::cout << "<FR4G-TP " << this->name << " hit points are now " << this->hit_points << ">" << std::endl;
	}
	else
	{
		std::cout << "<FR4G-TP " << this->name << " is beyond repairable>" << std::endl;
	}
}

FragTrap::~FragTrap()
{
	if (this->alive == true)
	{
		std::cout << "FR4G-TP " << this->name << ": 'Argh arghargh death gurgle gurglegurgle urgh... death.'" << std::endl;
		this->alive = false;
	}
	else
	{
		std::cout << "<FR4G-TP " << this->name << " gets recycled>" << std::endl;
	}
		
}
