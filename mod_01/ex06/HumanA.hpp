/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 23:23:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/08 23:52:35 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:

	Weapon&			weapon;				// Weapon reference can be explicitly initialized (parameter is provided)
	std::string		name;
	
	public:
	
	HumanA(char const *insert_name, Weapon& insert_weapon);
	void	attack();
};

#endif

