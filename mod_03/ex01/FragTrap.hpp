/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 22:45:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/17 21:40:53 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
{
	private:
		int hit_points;
		int max_hit_points;
		int energy_points;
		int max_energy_points;
		int level;
		int melee_damage;
		int ranged_damage;
		int	cryo_damage;
		int	explosive_damage;
		int fire_damage;
		int armor_reduction;
		bool alive;
		std::string name;
		std::string type;
		void fireAttack(std::string const &target);
		void cryoAttack(std::string const &target);
		void explosiveAttack(std::string const &target);
		std::string getTypeName();
	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const &other);
		void operator = (FragTrap const &other);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void vaulthunter_dot_exe(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~FragTrap();
};

#endif
