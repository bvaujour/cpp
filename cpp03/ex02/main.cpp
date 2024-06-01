/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:02:04 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:25:52 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	// std::string str("lol2");
	//ClapTrap a("lol1");
	// ClapTrap b(str);

	// int i(0);
	// a.displayStats();
	// b.displayStats();
	// while (i < 10)
	// {
	// 	a.attack("herl");
	// 	b.takeDamage(a.getAd());
	// 	b.beRepaired(10);
	// 	a.displayStats();
	// 	b.displayStats();
	// 	i++;
	// }
	// ScavTrap	h("lol");
	//ScavTrap	p;
	//ScavTrap	p2;

	//a = p2;
	// p = h;
	//a.attack("lol");
	FragTrap	d;
	FragTrap	e("lol");
	d.highFivesGuys();
	d = e;
	d.displayStats();
	e.attack("je");
	return (0);
}