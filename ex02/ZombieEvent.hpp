/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 00:07:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 16:38:04 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string.h>

class ZombieEvent
{
	private:

	std::string		type;
	std::string		name;
	
	public:
	
	ZombieEvent();
	void			setZombieType(char const *insert_type);
	void			setRandomName();
	class Zombie	*RandomChump();
	class Zombie	*newZombie(char const *name);
};

#endif
