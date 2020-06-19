/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 12:08:17 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 15:19:23 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		int size;
		int capacity;
		ISpaceMarine **squad;
	public:
		Squad();
		Squad(Squad const &other);
		void operator = (Squad const &other);
		int getCount() const;
		ISpaceMarine* getUnit(int index) const;
		int push(ISpaceMarine *marine);
		~Squad();
		
};

#endif
