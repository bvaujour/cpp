/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:40:28 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/08 13:14:34 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "destructor called on " << _name << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}