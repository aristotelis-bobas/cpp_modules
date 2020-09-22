/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:45:43 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:16:26 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int	main()
{
	srand(time(0));
	FragTrap test1("Bob");
	ScavTrap test2("Dave");
	ClapTrap test3("Amber");
	NinjaTrap test4("Joe");

	std::cout << std::endl;

	test1.vaulthunter_dot_exe("enemy");
	test1.vaulthunter_dot_exe("enemy");
	test1.meleeAttack("enemy");
	test1.rangedAttack("enemy");
	test1.beRepaired(20);
	test1.takeDamage(0);
	test1.takeDamage(30);
	
	std::cout << std::endl;

	test2.challengeNewcomer();
	test2.challengeNewcomer();
	test2.challengeNewcomer();
	test2.meleeAttack("enemy");
	test2.rangedAttack("enemy");
	test2.beRepaired(20);
	test2.takeDamage(0);
	test2.takeDamage(30);

	std::cout << std::endl;

	test3.meleeAttack("enemy");
	test3.rangedAttack("enemy");
	test3.beRepaired(20);
	test3.takeDamage(0);
	test3.takeDamage(30);

	std::cout << std::endl;

	test4.ninjaShoebox(test1);
	test4.ninjaShoebox(test2);
	test4.ninjaShoebox(test3);
	test4.meleeAttack("enemy");
	test4.rangedAttack("enemy");
	test4.beRepaired(20);
	test4.takeDamage(0);
	test4.takeDamage(30);

	std::cout << std::endl;
}
