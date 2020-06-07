/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:47:34 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 16:37:38 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <unistd.h>
#include <iostream>

void	LateToTheParty()
{
	std::cout << "\nA roaming zombie appears...\n" << std::endl;
	usleep(1000 * 1000);
	Zombie LateToTheParty(std::string("Rotten Corpse"), std::string("Slow Zombie"));
	LateToTheParty.announce();
	usleep(1000 * 1000);
	std::cout << "\nThe zombie starts eating the remains of the starved horde\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		LateToTheParty.announce("* MUNCHING AND CRUNCHING ON FLESH AND BONES *");
		usleep(1000 * 1000);
	}
	std::cout << "\nA loud missile draws the zombie's attention..." << std::endl;
	usleep(1000 * 1000);
	std::cout << "\n* A HUGE BLAST OBLITERATES EVERYTHING WITHIN A 5 KM RADIUS *\n" << std::endl;
}

void	StarvingHorde(int amount)
{
	ZombieEvent		StarvingHorde;
	Zombie			*Horde[amount];
	
	std::cout << "\nA zombie horde approaches...\n" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		Horde[i] = StarvingHorde.RandomChump("Rotten Corpse");
		usleep(1000 * 1000);
	}
	std::cout << "\nThere is no one to feed upon and the horde starves\n" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		delete Horde[i];
		usleep(1000 * 1000);
	}
	usleep(1000 * 1000);
}

int		main()
{
	srand(time(0));
	StarvingHorde(8);
	LateToTheParty();
	return (0);
}
