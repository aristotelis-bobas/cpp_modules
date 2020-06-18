/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 18:29:15 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:46:30 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap(std::string const name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    this->name = name;
	this->hit_points = this->FragTrap::hit_points;
	this->max_hit_points = this->FragTrap::max_hit_points;
	this->energy_points = this->NinjaTrap::energy_points;
	this->max_energy_points = this->NinjaTrap::max_energy_points;
	this->level = 1;
	this->melee_damage = this->NinjaTrap::melee_damage;
	this->ranged_damage = this->FragTrap::ranged_damage;
	this->armor_reduction = this->FragTrap::armor_reduction;
	this->alive = true;
	this->type = std::string("SUP3R-TP");
	std::cout << this->getTypeName() << ": 'Ha ha ha! Fall before your robot overlord!'" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other): ClapTrap(other.name), FragTrap(other.name), NinjaTrap(other.name)
{
	*this = other;
}

void SuperTrap::operator = (SuperTrap const &other)
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
		std::cout << this->getTypeName() << ": 'Ha ha ha! Fall before your robot overlord!'" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	if (this->alive == true)
	{
        this->FragTrap::rangedAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void SuperTrap::meleeAttack(std::string const &target)
{
	if (this->alive == true)
	{
        this->NinjaTrap::meleeAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

SuperTrap::~SuperTrap()
{
	std::cout << "<" << this->getTypeName() << " is not that super anymore>" << std::endl;
}

