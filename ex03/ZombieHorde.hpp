/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 19:00:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 19:42:21 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:

	int			amount;
	Zombie		*Horde;
	
	public:

	ZombieHorde(int N);
	ZombieHorde(char const *insert_type, int N);
	~ZombieHorde();
	void announce();
};

#endif
