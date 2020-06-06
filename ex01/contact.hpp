/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/05 18:07:12 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/06 22:15:08 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class contact
{
	private:
	
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

	public:
	
	contact(void);
	void add(void);
	void show(void);
	void search(int i);
};

#endif
