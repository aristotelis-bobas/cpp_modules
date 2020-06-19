/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 23:05:42 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/20 00:33:36 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		AMateria* inventory[4];
		bool equipped[4];
		std::string name;
	public:
		Character(std::string const &name);
		Character(Character const &other);
		Character& operator = (Character const &other);
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		std::string const& getName() const;
		~Character();
};

#endif
