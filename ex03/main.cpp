/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 23:24:52 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 23:37:50 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		ICharacter *harry = new Character("Harry");
		
		harry->equip(new Ice());
		harry->equip(new Cure());
		harry->use(0, *harry);
		harry->use(1, *harry);
		
		delete harry;
	}
}
