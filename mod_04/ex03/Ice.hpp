/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 22:37:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/21 14:52:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const &other);
		Ice& operator = (Ice const &other);
		AMateria* clone() const;
		void use(ICharacter &target);
		virtual ~Ice();
};

#endif
