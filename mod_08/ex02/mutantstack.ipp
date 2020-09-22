/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.ipp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/03 19:10:22 by abobas        #+#    #+#                 */
/*   Updated: 2020/07/03 20:44:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack():
    std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &other):
    std::stack<T>(other)
{
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const &other)
{
    *this = other;
    return (*this);
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}


template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
