/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 23:23:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/08 00:15:54 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:

	Weapon			*weapon;		// Weapon pointer because reference needs explicit initialization (no parameter provided)
	std::string		name;
	
	public:
	
	HumanB(char const *insert_name);
	void	setWeapon(Weapon& insert_weapon);
	void	attack();
};

#endif

