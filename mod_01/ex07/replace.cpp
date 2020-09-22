/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/08 23:57:41 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 16:07:01 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"
#include <iostream>

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid argument" << std::endl;
		return (1);
	}
	try
	{
		SedIsForLosers NotSed(av[1], av[2], av[3]);
		NotSed.replace();
	}
	catch(char const *error)
	{
		std::cerr << error << std::endl;
		return (1);
	}
	return (0);
}
