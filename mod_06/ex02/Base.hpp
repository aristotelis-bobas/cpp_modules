/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 13:27:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 13:46:49 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
	public:
		virtual ~Base() {};
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

#endif

