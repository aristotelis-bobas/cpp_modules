/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 12:41:47 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/01 20:36:48 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

template <typename T>
void print(T& container, int value)
{
    typename T::iterator it = easyfind(container, value);
    if (it != container.end())
        std::cout << *it << std::endl;
    else
        std::cout << "Value not found" << std::endl;
}

int main()
{
    {
        std::list<int> test;
        test.push_back(100);
        test.push_back(200);
        test.push_back(300);
        test.push_back(400);
        for (std::list<int>::iterator it = test.begin(); it != test.end(); it++)
            std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    {
        std::vector<int> test;
        test.push_back(10);
        test.push_back(20);
        test.push_back(30);
        test.push_back(40);
        for (int i = 0; i < 60; i += 10)
            print(test, i);
    }
    std::cout << std::endl;
    {
        std::list<int> test;
        test.push_back(10);
        test.push_back(20);
        test.push_back(30);
        test.push_back(40);
        for (int i = 0; i < 60; i += 10)
            print(test, i);
    }
}
