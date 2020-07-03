/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/03 15:52:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 20:44:20 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack<T> const &other);
        MutantStack<T>& operator=(MutantStack<T> const &other);
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
        virtual ~MutantStack();
};

#include "mutantstack.ipp"

/*
Stack is build on deque container, all deque methods are encapsulated tho, so have to implement them again in MutantStack
https://books.google.nl/books?id=N2T95pdN3YwC&pg=PA498&lpg=PA498&dq=typedef+typename+std::stack%3CT%3E::container_type::iterator+iterator;&source=bl&ots=IsmeGwwtn7&sig=ACfU3U0kN3mg8woTt8SIy25OUAUHDyw2JQ&hl=nl&sa=X&ved=2ahUKEwjDr7S31bHqAhWS3KQKHd3MD-oQ6AEwAXoECAoQAQ#v=onepage&q&f=false
 */

#endif
