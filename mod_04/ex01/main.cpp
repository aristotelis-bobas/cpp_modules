/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:21:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:22:28 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
    Character *me = new Character("Me");
    
    std::cout << *me;

    Enemy *b = new RadScorpion();
    
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

	std::cout << "\n\n" << std::endl;

	Enemy *c = new SuperMutant();

	me->equip(pf);
	std::cout << *me;
	std::cout << "Mutant HP = " << c->getHP() << std::endl;
	me->attack(c);
    std::cout << *me;
	std::cout << "Mutant HP = " << c->getHP() << std::endl;
	me->attack(c);
    std::cout << *me;
	std::cout << "Mutant HP = " << c->getHP() << std::endl;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
    std::cout << *me;
	std::cout << "Mutant HP = " << c->getHP() << std::endl;
	me->attack(c);
    std::cout << *me;

	std::cout << "\n\n" << std::endl;

	delete me;
}
