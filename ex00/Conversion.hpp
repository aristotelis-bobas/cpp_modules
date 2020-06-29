/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversion.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 14:01:32 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 21:15:51 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>

class Conversion
{
    private:
        std::string arg;
        std::string type;
        int int_value;
        float float_value;
        char char_value;
        double double_value;
        bool decimals;
        bool special;
        bool overflow;
        int parse();
        void display();
        void impossible();
    public:
        Conversion(char const *arg);
        Conversion(Conversion const &other);
        Conversion& operator = (Conversion const &other);
        virtual ~Conversion();
};

#endif
