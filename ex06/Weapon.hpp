/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 23:20:16 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/08 00:39:41 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
	
	std::string		type;

	public:

	Weapon();
	Weapon(char const *insert_weapon);
	void					setType(char const *insert_weapon);
	const std::string&		getType() const;
};

#endif
