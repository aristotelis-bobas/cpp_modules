/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 20:39:16 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 17:15:05 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <cstddef>
#include <list>

class Span
{
    private:
        std::vector<int> content;
        uint32_t capacity;
    public:
        Span(unsigned int N);
        Span(Span const &other);
        Span& operator=(Span const &other);
        void addNumber(int add);
        uint32_t shortestSpan();
        uint32_t longestSpan();
        template <class container>
        void addNumber(container new_content)
        {
            if (std::distance(new_content.begin(), new_content.end()) > static_cast<long>(this->capacity - this->content.size()))
                throw Span::CapacityReached();
            this->content.insert(this->content.end(), new_content.begin(), new_content.end());
        }
        template <typename It>
        void addNumber(It begin, It end)
        {
            if (std::distance(begin, end) > static_cast<long>(this->capacity - this->content.size()))
                throw Span::CapacityReached();
            this->content.insert(this->content.end(), begin, end);
        }
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

