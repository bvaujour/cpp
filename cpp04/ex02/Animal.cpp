/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:35:20 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 14:11:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(Animal& toCpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCpy;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &toCpy)
{
	std::cout << "Animal Overloaded operator = used on " << this << " from " << &toCpy << std::endl;
	if (this != &toCpy)
	{
		_type = toCpy.getType();
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::setType(const std::string& newType)
{
	_type = newType;
}
