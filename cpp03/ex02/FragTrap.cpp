/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:03:47 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:25:27 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_class = "FragTrap";
	_ep = 100;
	_ad = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap Name Edit constructor called" << std::endl;
	_name = name;
	_class = "FragTrap";
	_ep = 100;
	_ad = 30;
}

FragTrap::FragTrap(FragTrap &src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::string	answer;
	if (_hp > 0)
	{
		std::cout << "FragTrap " << _name << " ask you a HighFives!" << std::endl;
		while (answer != "y" && answer != "n")
		{
			std::cout << "will you do?(y/n)" << std::endl;
			if (!std::getline(std::cin, answer))
				break ;
		}
		if (answer == "y")
			std::cout << "FragTrap " << _name << " says \"you're ma bro, bro !\"" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << "can't high five while dead" << std::endl;
}

FragTrap &FragTrap::operator =(const FragTrap &src)
{
	if (this != &src)
	{
		_name = src.getName();
		_class = src.getClass();
		_hp = src.getHp();
		_ep = src.getEp();
		_ad = src.getAd();
	}
	std::cout << _class << " overrided Operator = used" << std::endl;
	return (*this);
}