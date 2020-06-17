/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:45:43 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/16 23:47:45 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap test("Bob");

	test.meleeAttack("enemy");
	test.rangedAttack("enemy");
	test.beRepaired(20);
	test.takeDamage(30);
	test.takeDamage(30);
	test.meleeAttack("enemy");
	test.takeDamage(30);
	test.beRepaired(20);
	test.takeDamage(30);
	test.takeDamage(30);
	test.meleeAttack("enemy");
	test.takeDamage(30);
	test.takeDamage(30);
	test.meleeAttack("enemy");
	test.takeDamage(30);
}
