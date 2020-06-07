/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 19:00:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 19:43:56 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

int		main()
{
	srand(time(0));
	ZombieHorde Horde("Putrid Piece of Shit", 10);
	Horde.announce();
	return (0);
}