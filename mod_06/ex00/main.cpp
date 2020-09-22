/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 14:00:52 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 15:27:02 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return (1);
    }
    Conversion convert(av[1]);
    return (0);
}
