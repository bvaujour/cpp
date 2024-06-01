/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:35:33 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:25:04 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	_type = "cure";
	_level = 1;
	_deltaHp = 10;
	_xp = 0;
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure default destructor called" << std::endl;
}

Cure*	Cure::clone() const
{
	Cure *a = new Cure();
	
	return (a);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	_xp++;
	if (_level % _xp == 0)
	{
		_level++;
		_deltaHp = _deltaHp + 2 * _level;
		_xp = 0;
	}
}

void	Cure::printInfos()
{
	std::cout << "Level:" << _level << " Heal:" << _deltaHp << " Xp:" << _xp << std::endl;
}