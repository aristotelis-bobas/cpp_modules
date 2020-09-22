/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 17:42:41 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:50:21 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(std::string const name): ClapTrap(name)
{
    this->name = name;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->ranged_damage = 5;
	this->armor_reduction = 0;
	this->alive = true;
	this->type = std::string("N1NJ4-TP");
	std::cout << this->getTypeName() << ": 'Look out everybody! Things are about to get awesome!'" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other): ClapTrap(other.name)
{
	*this = other;
}

void NinjaTrap::operator = (NinjaTrap const &other)
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
		std::cout << this->getTypeName() << ": 'Look out everybody! Things are about to get awesome!'" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &other)
{
    std::cout << "<" << this->getTypeName() << " starts CL4PP1NG " << other.getTypeName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &other)
{
    std::cout << "<" << this->getTypeName() << " starts FR4GG1NG " << other.getTypeName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &other)
{
    std::cout << "<" << this->getTypeName() << " starts SC4VV1NG " << other.getTypeName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &other)
{
    std::cout << "<" << this->getTypeName() << " starts N1NJ4-1NG " << other.getTypeName() << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Hehehehe, mwaa ha ha ha, MWAA HA HA HA!'" << std::endl;
		ClapTrap::rangedAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'That was me! I did that!'" << std::endl;
		ClapTrap::meleeAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "<" << this->getTypeName() << " has been killed>" << std::endl;
}
