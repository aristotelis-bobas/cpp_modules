/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.ipp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 17:45:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 18:27:10 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	this->array = 0;
	this->array_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->array_size = n;
}

template <typename T>
Array<T>::Array(Array<T> const &other)
{
	this->array = new T[other.size];
	this->array_size = other.size;
	for (size_t i = 0; i < this->array_size; i++)
		this->array[i] = other.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &other)
{
	if (this->array)
		delete[] this->array;
	this->array = new T[other.size];
	this->array_size = other.size;
	for (size_t i = 0; i < this->array_size; i++)
		this->array[i] = other.array[i];
	return (*this);	
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
	if (index < 0 || index >= this->array_size)
		throw Array<T>::OutOfBounds();
	return (this->array[index]);
}

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
	return ("Index is out of bounds\n");
}

template <typename T>
size_t Array<T>::size() const
{
	return (this->array_size);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}
