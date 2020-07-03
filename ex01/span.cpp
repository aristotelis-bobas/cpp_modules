/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 21:05:15 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 17:13:56 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <iterator>

Span::Span(unsigned int N)
{
    this->capacity = N;
}

Span::Span(Span const &other)
{
    this->capacity = other.capacity;
    this->content = other.content;
}

Span& Span::operator=(Span const &other)
{
    this->capacity = other.capacity;
    this->content = other.content;
    return (*this);
}

const char* Span::CapacityReached::what() const throw()
{
    return ("Capacity reached");
}

const char* Span::NoSpanToFind::what() const throw()
{
    return ("No span to find");
}

void Span::addNumber(int add)
{
    if (this->content.size() < this->capacity)
        this->content.push_back(add);
    else
        throw Span::CapacityReached();
}

uint32_t Span::shortestSpan()
{
    if (this->content.size() < 2)
        throw Span::NoSpanToFind();
    uint32_t shortest_span = UINT32_MAX;
    bool found = false;
    for (std::vector<int>::iterator it_i = this->content.begin(); it_i != this->content.end(); it_i++)
    {
        for (std::vector<int>::iterator it_j = it_i + 1; it_j != this->content.end(); it_j++)
        {
            if (static_cast<uint32_t>(std::abs(*it_i - *it_j)) < shortest_span)
            {
                shortest_span = static_cast<uint32_t>(std::abs(*it_i - *it_j));
                found = true;
            }
        }
    }
    if (found == false || shortest_span == 0)
        throw Span::NoSpanToFind();
    return (shortest_span);
}

uint32_t Span::longestSpan()
{
    if (this->content.size() < 2)
        throw Span::NoSpanToFind();
    int max = *std::max_element(this->content.begin(), this->content.end());
    int min = *std::min_element(this->content.begin(), this->content.end());
    if (std::abs(max - min) < 1)
        throw Span::NoSpanToFind();
    return (std::abs(max - min));
}

Span::~Span()
{
}
