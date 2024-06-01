/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:56:36 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 17:04:43 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "UNNAMED";
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap name constructor called" << std::endl;
	
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;

}

void	DiamondTrap::WhoAmI()
{
	std::cout << "My _name is " << _name << ", My ClapTrap _name is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator =(const DiamondTrap &src)
{
	if (this != &src)
	{
		_name = src._name;
		ClapTrap::_name = src._name + "_clap_name";
		_hp = src.getHp();
		_ep = src.getEp();
		_ad = src.getAd();
	}
	std::cout << "DiamondTrap overrided Operator = used" << std::endl;
	return (*this);
}

