/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:45:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 16:34:46 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	private:
		int fire_damage;
		int	cryo_damage;
		int	explosive_damage;
		void fireAttack(std::string const &target);
		void cryoAttack(std::string const &target);
		void explosiveAttack(std::string const &target);
	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const &other);
		void operator = (FragTrap const &other);
		void vaulthunter_dot_exe(std::string const &target);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		~FragTrap();
};

#endif
