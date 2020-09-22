/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:48:02 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 19:46:38 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:

	std::string		name;
	std::string		type;
	
	public:

	Zombie();
	Zombie(std::string insert_name, std::string insert_type);
	~Zombie();
	void			announce();
	void			announce(char const *insert_text);
};

#endif
