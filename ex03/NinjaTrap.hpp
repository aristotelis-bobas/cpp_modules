/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 17:36:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:09:05 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const &other);
		void operator = (NinjaTrap const &other);
        void ninjaShoebox(ClapTrap const &other);
        void ninjaShoebox(FragTrap const &other);
        void ninjaShoebox(ScavTrap const &other);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		~NinjaTrap();
};

#endif
