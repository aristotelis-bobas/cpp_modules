/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:47:34 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 17:08:04 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iostream>

#define AMOUNT 10

void	EndOfStory()
{
	std::string end("What a time to be alive...................");
	usleep(1000 * 1000);
	std::cout << "\n* AFTER YOUR EARS STOP RINGING YOU HEAR THE SOUND OF ZOMBIE GUTS RAINING FROM THE SKY AND HITTING THE GROUND *\n" << std::endl;
	for (unsigned long i = 0; i < end.length(); i++)
	{
		std::cout << end[i] << std::flush;
		usleep(500 * 1000);
	}
	std::cout << std::endl;
}

void	LateToTheParty()
{
	Zombie		*LaterToTheParty;
	ZombieEvent	LaterToThePartyEvent;
	
	std::cout << "\nTwo, particulary fat, roaming zombies appear...\n" << std::endl;
	usleep(1000 * 1000);
	Zombie LateToTheParty(std::string("Fat Rotten Corpse"), std::string("Slow Zombie"));
	LateToTheParty.announce();
	LaterToThePartyEvent.setZombieType("Fat Rotten Corpse");
	LaterToTheParty = LaterToThePartyEvent.newZombie("Super Slow Zombie");
	LaterToTheParty->announce();
	usleep(1000 * 1000);
	std::cout << "\nThe zombies start eating the remains of the starved horde\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		LateToTheParty.announce("* MUNCHING ON FLESH AND BONES *");
		LaterToTheParty->announce("* CRUNCHING ON FLESH AND BONES *");
		usleep(1000 * 1000);
	}
	std::cout << "\nThe loud sound of a missile draws the attention of the eating zombies..." << std::endl;
	usleep(1000 * 1000);
	std::cout << "\n* A HUGE BLAST OBLITERATES EVERYTHING THAT'S REMOTELY CLOSE TO THE DEAD PILE OF UNDEAD *\n" << std::endl;
	delete LaterToTheParty;
}

void	StarvingHorde()
{
	ZombieEvent		StarvingHorde;
	Zombie			*Horde[AMOUNT];
	
	StarvingHorde.setZombieType("Starving Rotten Corpse");
	std::cout << "\nA zombie horde approaches...\n" << std::endl;
	for (int i = 0; i < AMOUNT; i++)
	{
		Horde[i] = StarvingHorde.RandomChump();
		usleep(1000 * 1000);
	}
	std::cout << "\nAs you remain hidden, the horde doesn't find anything to feed upon and eventually starves \n" << std::endl;
	for (int i = 0; i < AMOUNT; i++)
	{
		delete Horde[i];
		usleep(1000 * 1000);
	}
	usleep(1000 * 1000);
}

void	StoryTime()
{
	StarvingHorde();
	LateToTheParty();
	EndOfStory();
}

int		main()
{
	srand(time(0));
	StoryTime();
	return (0);
}
