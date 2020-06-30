/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 17:42:30 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 18:21:20 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>


template <typename T>
class Array
{
	private:
		T *array;
		size_t array_size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &other);
		Array<T>& operator=(Array<T> const &other);
		T& operator[](size_t index);
		class OutOfBounds: public std::exception
		{
			virtual const char* what() const throw();
		};
		size_t size() const;
		virtual ~Array();
};

#include "Array.ipp"

#endif
