/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/03 15:52:34 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 20:37:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>
#include <iostream>

int main()
{
    std::cout << std::endl;
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << "top = " << mstack.top() << std::endl;

        mstack.pop();

        std::cout << "size = " << mstack.size() << std::endl;
    }
    std::cout << std::endl;
    {
        MutantStack<int> mstack;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << std::endl;
    {
        MutantStack<int> test;
        
        for (int i = 0; i < 10; i++)
                test.push(i * 100);
        for (MutantStack<int>::iterator it = test.begin(); it != test.end(); it++)
            std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    {
        std::list<int> test;
        
        for (int i = 0; i < 10; i++)
                test.push_back(i * 100);
        for (std::list<int>::iterator it = test.begin(); it != test.end(); it++)
            std::cout << *it << std::endl;
    }
}
