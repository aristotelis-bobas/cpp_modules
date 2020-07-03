/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 20:39:16 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 15:45:25 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <cstddef>

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
        void addNumber(std::vector<int> &vector);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
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

