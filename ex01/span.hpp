/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 20:39:16 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 14:37:50 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstddef>
#include <vector>
#include <exception>

class Span
{
    private:
        std::vector<int> content;
        unsigned int capacity;
        unsigned int size;
    public:
        Span(unsigned int N);
        Span(Span const &other);
        Span& operator=(Span const &other);
        void addNumber(int add);
        uint32_t shortestSpan();
        uint32_t longestSpan();
        class CapacityReached: public std::exception
        {
            virtual const char* what() const throw();
        };
        class NoSpanToFind: public std::exception
        {
            virtual const char* what() const throw();
        };
        virtual ~Span();
};

#endif

