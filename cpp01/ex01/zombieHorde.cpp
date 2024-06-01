/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:23:58 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 09:41:46 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *z;
	int	i(0);

	if (N > 0)
		z = new Zombie[N];
	while (i < N)
	{
		if (i == 0)
			z[i].giveName(name + "first");
		else
			z[i].giveName(name);
		i++;
	}
	return (z);
}