/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:45:43 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:16:42 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int	main()
{
	srand(time(0));
	FragTrap test("Bob");

	std::cout << std::endl;

	test.vaulthunter_dot_exe("enemy");
	test.vaulthunter_dot_exe("enemy");
	test.meleeAttack("enemy");
	test.rangedAttack("enemy");
	test.beRepaired(20);
	test.takeDamage(0);
	test.takeDamage(30);
	test.takeDamage(30);
	test.takeDamage(30);

	std::cout << std::endl;
}
