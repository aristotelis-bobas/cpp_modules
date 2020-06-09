/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:47:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 17:09:27 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

Zombie::Zombie()
{
	std::string name;
	std::string type;
}

Zombie::Zombie(std::string insert_name, std::string insert_type)
{
	name = insert_name;
	type = insert_type;
}

Zombie::~Zombie()
{
	std::cout << name << " (" << type << ") died" << std::endl;
}

void	Zombie::setRandomName()
{
	int			random = rand();

	while (random > 4)
		random = random / 4;
	if (random == 1)
		name = std::string ("Spitter");
	else if (random == 2)
		name = std::string ("Boomer");
	else if (random == 3)
		name = std::string ("Charger");
	else
		name = std::string ("Smoker");
}

void  Zombie::RandomChump(char const *insert_type)
{
	setRandomName();
	type = std::string (insert_type);
}

void	Zombie::announce()
{
	std::cout << '<' << name << " (" << type << ")> * FOUL SCREECHING AND GASPING * " << std::endl;
}

void	Zombie::announce(char const *insert_text)
{
	std::cout << '<' << name << " (" << type << ")>  " << insert_text << std::endl;
}
