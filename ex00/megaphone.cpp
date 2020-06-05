/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/03 14:48:26 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/03 15:22:22 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     is_lower_case(char c)
{
    return (c >= 'a' && c <= 'z');
}

int		is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\a');
}

char    *capitalize_str(char *arg)
{
    int     i;

    i = 0;
    while (arg[i] != '\0')
    {
        if (is_lower_case(arg[i]))
            arg[i] = arg[i] - 32;
        i++;
    }
    return (arg);
}

void    print_argument(char *arg)
{
    int     i;

    i = 0;
    while (is_space(arg[i]) && arg[i] != '\0')
        i++;
    while (arg[i + 1] != '\0')
    {
        if (is_space(arg[i]))
        {
            if (!is_space(arg[i + 1]))
                std::cout << arg[i];
        }
        else
            std::cout << arg[i];
        i++;
    }
    if (!is_space(arg[i]))
        std::cout << arg[i];
}

int     main(int ac, char **av)
{
    int     i;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        i = 1;
        while (i < ac)
        {
            print_argument(capitalize_str(av[i]));
            if (i + 1 != ac)
                std::cout << ' ';
            i++;
        }
        std::cout << '\n';
    }
    return (0);
}