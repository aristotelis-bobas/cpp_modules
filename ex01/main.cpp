/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 12:41:47 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/01 22:39:17 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
    {
        try
        {
            Span test(30);
            
            for (int i = 0; i < 30; i++)
                test.addNumber(i);
            std::vector<int>::iterator it = test.getIterator();
            for (int i = 0; i < 30; i++)
            {
                std::cout << *it << std::endl;
                it++;
            }
            std::cout << "Longest span: " << test.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(2);
            
            test.addNumber(1);
            test.addNumber(1);
            
            std::cout << "Longest span: " << test.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(1);
            
            test.addNumber(1);
            test.addNumber(2);
            
            std::cout << "Longest span: " << test.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(1);
            
            test.addNumber(1);
            
            std::cout << "Longest span: " << test.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
