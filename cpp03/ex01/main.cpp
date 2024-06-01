/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:02:04 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:21:48 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	a("lol");
	ScavTrap	b(a);
	ScavTrap	c;
	c = a;;
	c.attack("lol");
	c.displayStats();
	c.guardGate();
	return (0);
}