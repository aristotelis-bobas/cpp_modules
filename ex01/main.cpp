/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 12:41:47 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 17:16:33 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    {
        try
        {
            Span test(30);
            
            for (int i = 0; i < 30; i++)
                test.addNumber(i);
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
    {
        try
        {
            Span test(1000);
            
            test.addNumber(-10);
            test.addNumber(-555);
            
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
            Span test(10);
            
            for (int i = 0; i < 10; i++)
                test.addNumber((-i * 10));
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(10);
            
            for (int i = 0; i < 10; i++)
                test.addNumber((i * -112));
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

    }
    {
        try
        {
            Span test(10000);
            std::vector<int> vector;
            
            for (int i = 0; i < 10000; i++)
                vector.push_back(i);
            test.addNumber(vector);
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(10000);
            std::vector<int> vector;
            
            for (int i = 0; i < 10000; i++)
                vector.push_back(i);
            test.addNumber(vector.begin(), vector.end());
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(10000);
            std::list<int> list;
            
            for (int i = 0; i < 10000; i++)
                list.push_back(i * 177);
            test.addNumber(list);
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(10000);
            std::list<int> list;
            
            for (int i = 0; i < 10000; i++)
                list.push_back(i * 177);
            test.addNumber(list.begin(), list.end());
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(100);
            std::vector<int> vector;
            
            for (int i = 0; i < 10000; i++)
                vector.push_back(i);
            test.addNumber(vector.begin(), vector.end());
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Span test(100);
            std::vector<int> vector;
            
            for (int i = 0; i < 10000; i++)
                vector.push_back(i);
            test.addNumber(vector);
            
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
