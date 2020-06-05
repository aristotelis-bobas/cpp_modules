/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/03 14:48:26 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/05 17:04:32 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	print_argument(std::string arg)
{
	int	j = 0;
	int	l = arg.length();
	while (j < l && isspace(arg[j]))
		j++;
	for (int i = j; i < l; i++)
	{
		if (isspace(arg[i]))
		{
			if (!isspace(arg[i + 1]) && arg[i + 1])
				std::cout << (char)toupper(arg[i]);
		}
		else
			std::cout << (char)toupper(arg[i]);
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string arg(av[i]);
			print_argument(arg);
			if (i + 1 != ac)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}
