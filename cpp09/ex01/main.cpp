/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:05:38 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/10 17:55:51 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (std::cout << "Invalid number of argument" << std::endl, 1);
	RPN	rpn(av[1]);
	return (0);
}