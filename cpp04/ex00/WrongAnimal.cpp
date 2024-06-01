/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:43:31 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/16 15:44:38 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal& toCpy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = toCpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &toCpy)
{
	std::cout << "Overloaded operator = used on " << this << " from " << &toCpy << std::endl;
	if (this != &toCpy)
	{
		_type = toCpy.getType();
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::setType(const std::string& newType)
{
	_type = newType;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}