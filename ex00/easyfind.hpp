/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 12:41:50 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/01 20:18:55 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& a, int b)
{
    return (std::find(a.begin(), a.end(), b));
}

#endif
