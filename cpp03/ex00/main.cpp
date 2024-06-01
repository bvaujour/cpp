/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:02:04 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/05 14:46:14 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::string str("lol2");
	ClapTrap a("lol1");
	ClapTrap b(str);

	int i(0);
	a.displayStats();
	b.displayStats();
	while (i < 10)
	{
		a.attack("herl");
		b.takeDamage(a.getAd());
		b.beRepaired(10);
		a.displayStats();
		b.displayStats();
		i++;
	}
	return (0);
}