/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 21:05:15 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/01 22:37:29 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span(unsigned int N)
{
    this->capacity = N;
    this->size = 0;
}

Span::Span(Span const &other)
{
    this->capacity = other.capacity;
    this->size = other.size;
    this->content = other.content;
}

Span& Span::operator=(Span const &other)
{
    this->capacity = other.capacity;
    this->size = other.size;
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

std::vector<int>::iterator Span::getIterator()
{
    return (this->content.begin());
}

void Span::addNumber(int add)
{
    if (this->size < this->capacity)
    {
        this->content.push_back(add);
        this->size++;
    }
    else
        throw Span::CapacityReached();
}

/*
int Span::shortestSpan() const
{
    if (this->size < 2)
        throw Span::NoSpanToFind();
    
}
 */

int Span::longestSpan() const
{
    if (this->size < 2)
        throw Span::NoSpanToFind();
    int max = *std::max_element(this->content.begin(), this->content.end());
    int min = *std::min_element(this->content.begin(), this->content.end());
    if (max - min < 1)
        throw Span::NoSpanToFind();
    return (max - min);
}

Span::~Span()
{
}
