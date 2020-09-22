/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 19:00:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 17:13:49 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int		main()
{
	srand(time(0));
	ZombieHorde Horde("Putrid Piece of Shit", 10);
	std::cout << "\n\n\n\n< I CAN'T HEAR YOU! >\n\n\n\n" << std::endl;
	Horde.announce();
	std::cout << "\n\n\n\n< GOOD BYE, LEAVING PROGRAM NOW! >\n\n\n\n" << std::endl;
	return (0);
}
