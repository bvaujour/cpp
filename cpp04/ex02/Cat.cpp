/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:08:48 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 13:02:07 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &toCpy)
{
	_brain = NULL;
	*this = toCpy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "pssschit" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (_brain);
}

Cat&	Cat::operator=(const Cat& toCpy)
{
	std::cout << "Cat operator = called" << std::endl;
	if (_brain)
		delete _brain;
	_brain = new Brain(*toCpy._brain);
	_type = toCpy._type;
	return (*this);
}