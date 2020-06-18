/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 18:29:13 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 18:37:37 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
    public:
        SuperTrap(std::string const name);
		SuperTrap(SuperTrap const &other);
		void operator = (SuperTrap const &other);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		~SuperTrap();
};

#endif
