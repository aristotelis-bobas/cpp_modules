/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/10 18:32:18 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/10 20:12:16 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Jemoeder
{
private:
    std::string string_;
public:
    Jemoeder(char const *string);
    Jemoeder(Jemoeder& original);
    ~Jemoeder();
    void operator= (Jemoeder& original);
    void print();
};

Jemoeder::Jemoeder(char const *string)
{
    string_ = std::string (string);
    std::cout << "Jemoeder was constructed" << std::endl;
}

Jemoeder::Jemoeder(Jemoeder& original)
{
    string_ = original.string_;
    std::cout << "Jemoeder was copy constructed" << std::endl;
}

void Jemoeder::operator= (Jemoeder& original)
{
    string_ = original.string_;
    std::cout << "Jemoeder was operator overloaded" << std::endl;
}

void Jemoeder::print()
{
    std::cout << string_ << std::endl;
}

Jemoeder::~Jemoeder()
{
    std::cout << "Jemoeder was destructed" << std::endl;
}

int     main()
{
    Jemoeder    test_1("haha");
    std::cout << "test_1.string = "; test_1.print();
    Jemoeder    test_2("jemoeder");
    std::cout << "test_2.string = "; test_2.print();
    test_2 = test_1;
    std::cout << "test_2.string = "; test_2.print();
    Jemoeder    test_3(test_1);
    std::cout << "test_3.string = "; test_3.print();
    std::cout << "Leaving program now" << std::endl;
}
