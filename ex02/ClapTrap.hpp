/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 16:06:26 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 17:01:29 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
    protected:
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
    public:
        ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &other);
		void operator = (ClapTrap const &other);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif
