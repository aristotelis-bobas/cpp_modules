/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/17 19:01:30 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 16:46:17 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
	private:
		void challengeOne();
		void challengeTwo();
		void challengeThree();
		void challengeFour();
		void challengeFive();
	public:
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &other);
		void operator = (ScavTrap const &other);
		void challengeNewcomer();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		~ScavTrap();
};

#endif
