/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:44:34 by bvaujour          #+#    #+#             */
/*   Updated: 2024/03/25 15:41:16 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name("groot");
	if (1)
	{
	Zombie	*z;
	randomChump(name);
	std::cout << "this Zombie annouced from another function and got destructed with stack" << std::endl;
	z = newZombie(name);
	z->announce();
	std::cout << "this Zombie got created in another function but annouced in the main and will be destructed with the head using a delete" << std::endl;
	delete z;
	}
}