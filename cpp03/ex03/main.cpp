/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:02:04 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 17:04:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int	main()
{
	DiamondTrap	b("groot");
	DiamondTrap	a("a");
	b.WhoAmI();
	b.displayStats();
	b = a;
	b.WhoAmI();
	b.attack("groot");
	b.highFivesGuys();
	b.guardGate();
	return (0);
}