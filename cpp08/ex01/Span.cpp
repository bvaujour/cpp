/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:45:54 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/07 10:24:28 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_maxSize = 0;
	_actualSize = 0;
}

Span::Span(unsigned int N)
{
	_maxSize = N;
	_actualSize = 0;
}
Span::Span(Span &toCpy)
{
	*this = toCpy;
}
Span::~Span()
{
}

Span	&Span::operator=(Span &toCpy)
{
	if (this != &toCpy)
	{
		_vector = toCpy._vector;
		_maxSize = toCpy._maxSize;
		_actualSize = toCpy._actualSize;
	}
	return (*this);
}

void	Span::addNumber(int toAdd)
{
	if (_actualSize + 1 > _maxSize)
		throw (TabIsFull());
	_vector.push_back(toAdd);
	_actualSize++;
}

const char	*Span::TabIsFull::what() const throw()
{
	return ("Too much elements to add");
}

const char	*Span::ToFewElement::what() const throw()
{
	return ("Too few elements to excecute function");
}

int		Span::longestSpan(void)
{
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	if (_actualSize < 2)
		throw(ToFewElement());
	min = std::min_element(_vector.begin(), _vector.end());
	max = std::max_element(_vector.begin(), _vector.end());
	return (*max - *min);
}

int		Span::shortestSpan(void)
{
	std::vector<int> cpy;
	std::vector<int>::iterator it;
	int	min;
	int sec_min;

	cpy = _vector;
	it = cpy.begin();
	while (it != cpy.end())
	{
		*it = std::abs(*it);
		it++;
	}
	it = std::min_element(cpy.begin(), cpy.end());
	min = *it;
	cpy.erase(it);
	it = std::min_element(cpy.begin(), cpy.end());
	sec_min = *it;
	return (sec_min - min);
}

void	Span::displaySpan(void)
{
	std::vector<int>::iterator	it;

	std::cout << "\n--------------------------------------------\n" << std::endl;
	it = _vector.begin();
	std::cout << "displaySpan\n" << std::endl;
	std::cout << "max size = " << _maxSize << std::endl;
	std::cout << "actual size = " << _actualSize << std::endl;
	while (it != _vector.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "\n--------------------------------------------" << std::endl;

}
