/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 19:01:00 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 19:55:12 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N)
{
	amount = N;
	Horde = new Zombie[amount];
	
	for (int i = 0; i < amount; i++)
	{
		Horde[i].RandomChump("Rotten Corpse");
		Horde[i].announce("* UNCOMPREHENSIBLE BEASTLIKE SCREAMING *");
	}
}

ZombieHorde::ZombieHorde(char const *insert_type, int N)
{
	amount = N;
	Horde = new Zombie[amount];
	
	for (int i = 0; i < amount; i++)
	{
		Horde[i].RandomChump(insert_type);
		Horde[i].announce("* UNCOMPREHENSIBLE BEASTLIKE SCREAMING *");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] Horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < amount; i++)
		Horde[i].announce();
}