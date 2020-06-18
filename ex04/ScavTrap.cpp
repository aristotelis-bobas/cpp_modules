/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/17 19:01:34 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:00:46 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
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

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other.name)
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

void ScavTrap::challengeNewcomer()
{
	int number = rand() % 5;

	if (number == 0)
		this->challengeOne();
	else if (number == 1)
		this->challengeTwo();
	else if (number == 2)
		this->challengeThree();
	else if (number == 3)
		this->challengeFour();
	else if (number == 4)
		this->challengeFive();
}

void ScavTrap::challengeOne()
{
	std::string answer;
	
	std::cout << this->getTypeName() << ": 'A snail is at the bottom of a 20 meters deep pit.\n";
	std::cout << "Every day the snail climbs 5 meters upwards, but at night, it slides 4 meters back downwards.\n";
	std::cout << "How many days does it take before the snail reaches the top of the pit?'" << std::endl;
	std::cout << "Your answer: ";
	std::cin >> answer;
	if (!answer.compare("16"))
		std::cout << this->getTypeName() << ": 'Good job!'" << std::endl;
	else
		std::cout << this->getTypeName() << ": 'WRONG!'" << std::endl;
}

void ScavTrap::challengeTwo()
{	
	std::string answer;
	
	std::cout << this->getTypeName() << ": 'The day after tomorrow is the third day after Wednesday.\n";
	std::cout << "Which day was the day before yesterday?'" << std::endl;
	std::cout << "Your answer: ";
	std::cin >> answer;
	if (!answer.compare("Tuesday") || !answer.compare("tuesday"))
		std::cout << this->getTypeName() << ": 'Good job!'" << std::endl;
	else
		std::cout << this->getTypeName() << ": 'WRONG!'" << std::endl;
}

void ScavTrap::challengeThree()
{
	std::string answer;
	
	std::cout << this->getTypeName() << ": 'There is a three digit number.\n";
	std::cout << "The second digit is four times as big as the third digit, while the first digit is three less than the second digit.\n";
	std::cout << "What is the number?'" << std::endl;
	std::cout << "Your answer: ";
	std::cin >> answer;
	if (!answer.compare("141"))
		std::cout << this->getTypeName() << ": 'Good job!'" << std::endl;
	else
		std::cout << this->getTypeName() << ": 'WRONG!'" << std::endl;
}

void ScavTrap::challengeFour()
{
	std::string answer;
	
	std::cout << this->getTypeName() << ": 'What is half of two plus two?'" << std::endl;
	std::cout << "Your answer: ";
	std::cin >> answer;
	if (!answer.compare("3"))
		std::cout << this->getTypeName() << ": 'Good job!'" << std::endl;
	else
		std::cout << this->getTypeName() << ": 'WRONG!'" << std::endl;
}

void ScavTrap::challengeFive()
{	
	std::string answer;
	
	std::cout << this->getTypeName() << ": 'Sally is 54 years old and her mother is 80.\n";
	std::cout << "How many years ago was Sally's mother three times her age?'" << std::endl;
	std::cout << "Your answer: ";
	std::cin >> answer;
	if (!answer.compare("41"))
		std::cout << this->getTypeName() << ": 'Good job!'" << std::endl;
	else
		std::cout << this->getTypeName() << ": 'WRONG!'" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	if (this->alive == true)
	{
		std::cout << this->getTypeName() << ": 'Step right up, to the Bulletnator 9000!'" << std::endl;
		ClapTrap::rangedAttack(target);
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
		ClapTrap::meleeAttack(target);
	}
	else
	{
		std::cout << "<" << this->getTypeName() << " has stopped functioning>" << std::endl;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->getTypeName() << " is now lost forever>" << std::endl;
}
