/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 21:21:20 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 22:29:09 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <iostream>

struct Data { std::string s1; int n; std::string s2; };

char randomAlphaNum()
{
    int ret;
    
    do
    {
        ret = rand() % 100;
    } while (!isalnum(ret)); 
    return (static_cast<char>(ret)); 
}

void* serialize(void)
{
    char* memory = new char[20];
    for (int i = 0; i < 8; i++)
        memory[i] = randomAlphaNum();
    *reinterpret_cast<int*>(memory + 8) = rand() % 777;
    for (int i = 12; i < 20; i++)
        memory[i] = randomAlphaNum();
    return (static_cast<void*>(memory));
}

Data* deserialize(void *raw)
{
    Data *ret = new Data;
    ret->s1 = std::string(static_cast<char*>(raw), 8);
    ret->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);    // static_cast to char pointer first otherwise arithmetic error on void pointer
    ret->s2 = std::string(static_cast<char*>(raw) + 12, 8);
    return(ret);
}

int main(void)
{
    srand(time(0));
    void* raw = serialize();
    Data* test = deserialize(raw);
    
    std::cout << std::endl;
    std::cout << test->s1 << "|";
    std::cout << test->n << "|";
    std::cout << test->s2 << std::endl;
    std::cout << std::endl;
    
    delete static_cast<char*>(raw);
    delete test;
}
