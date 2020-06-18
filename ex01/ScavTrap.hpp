/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/17 19:01:30 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 14:24:23 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
	private:
		int hit_points;
		int max_hit_points;
		int energy_points;
		int max_energy_points;
		int level;
		int melee_damage;
		int ranged_damage;
		int armor_reduction;
		bool alive;
		std::string name;
		std::string type;
		std::string getTypeName();
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
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ScavTrap();
};

#endif
