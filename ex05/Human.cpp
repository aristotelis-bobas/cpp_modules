/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 21:03:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 17:19:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
}

const Brain&		Human::getBrain()
{
	return(brain_);
}

std::string			Human::identify()
{
	return (brain_.identify());
}
