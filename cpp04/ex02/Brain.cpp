/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:09:39 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 12:25:41 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = "void";
		i++;
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(Brain& toCpy)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = toCpy._ideas[i];
		i++;
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

std::string*	Brain::getIdeas()
{
	return (_ideas);
}

Brain&	Brain::operator=(const Brain& toCpy)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = toCpy._ideas[i];
		i++;
	}
	std::cout << "Brain operator = called" << std::endl;
	return (*this);
}

void	Brain::showIdeas()
{
	int	i;

	i = 0;
	while (i < 100)
	{
		std::cout << _ideas[i] << std::endl;;
		i++;
	}
}

void	Brain::setIdeas(std::string idea)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = idea;
		i++;
	}
}