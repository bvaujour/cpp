/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:19:17 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 12:40:12 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	_size = 0;
	_tab = new T[0]();
}

template<typename T>
Array<T>::Array(const Array &toCpy)
{
	unsigned int	i;

	i = 0;
	_size = toCpy._size;
	_tab = new T[_size];
	while (i < _size)
	{
		_tab[i] = toCpy._tab[i];
		i++;
	}
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &toCpy)
{
	unsigned int	i;

	i = 0;
	_size = toCpy._size;
	delete[] _tab;
	_tab = new T[_size];
	while (i < _size)
	{
		_tab[i] = toCpy._tab[i];
		i++;
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _tab;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_tab = new T[n]();
	std::cout << "array of size " << n << " created" << std::endl;
}

template<typename T>
unsigned int	Array<T>::size()
{
	return (_size);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	// std::cout << i << std::endl;
	if (i >= _size)
		throw (std::out_of_range("index error. size() to know your Array size"));
	return (_tab[i]);
}

