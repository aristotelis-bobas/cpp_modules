/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:45:43 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/17 21:48:37 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <stdlib.h>
#include <time.h>

int	main()
{
	srand(time(0));
	FragTrap test("Bob");

	test.vaulthunter_dot_exe("enemy");
	test.vaulthunter_dot_exe("enemy");
	test.meleeAttack("enemy");
	test.rangedAttack("enemy");
	test.beRepaired(20);
	test.takeDamage(30);
	test.takeDamage(30);
	test.takeDamage(30);
	test.takeDamage(30);
}
