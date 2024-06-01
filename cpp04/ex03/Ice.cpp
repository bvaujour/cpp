/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:59:13 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:24:45 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	_type = "ice";
	_level = 1;
	_deltaHp = -10;
	_xp = 0;
	//std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice default destructor called" << std::endl;
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	_xp++;
	if (_level / _xp == 1)
	{
		std::cout << "Materia Ice leveled up!" << std::endl;
		_level++;
		_deltaHp = _deltaHp - 2 * _level;
		_xp = 0;
	}
}

void	Ice::printInfos()
{
	std::cout << "Level:" << _level << " Damage:" << -_deltaHp <<  " Xp:" << _xp << std::endl;
}