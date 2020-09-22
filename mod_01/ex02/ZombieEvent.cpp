/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 00:07:10 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 16:37:58 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent()
{
	std::string name;
	std::string type;
}

void			ZombieEvent::setZombieType(char const *insert_type)
{
	type = std::string(insert_type);
}

void			ZombieEvent::setRandomName()
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

class Zombie	*ZombieEvent::RandomChump()
{
	Zombie		*NewZombie;
	
	setRandomName();
	NewZombie = new class Zombie(type, name);
	NewZombie->announce();
	return (NewZombie);
}

class Zombie	*ZombieEvent::newZombie(char const *insert_name)
{
	Zombie		*NewZombie;

	name = std::string(insert_name);
	NewZombie = new class Zombie(type, name);
	return (NewZombie);
}
