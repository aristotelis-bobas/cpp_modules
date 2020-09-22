/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 23:24:52 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/20 01:04:20 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	{
		ICharacter *harry = new Character("harry");
		
		harry->equip(new Ice());
		harry->equip(new Cure());
		harry->use(0, *harry);
		harry->use(1, *harry);
		
		delete harry;
	}
	std::cout << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		ICharacter *bob = new Character("bob");
		
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("cure"));

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		ICharacter *bob = new Character("bob");
		
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("cure"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("cure"));
		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("cure"));
		me->equip(src->createMateria("FIREBALL"));
		me->equip(src->createMateria("NUCLEAR OPTION"));

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		me->use(5, *bob);

		me->unequip(0);
		me->unequip(1);
		me->unequip(2);
		me->unequip(3);

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		
		delete bob;
		delete me;
		delete src;
	}
}
