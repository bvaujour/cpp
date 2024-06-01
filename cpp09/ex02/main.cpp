/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:55:52 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/06 13:22:38 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	str_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != '+')
			return (0);
		i++;
	}
	return (1);
}

int	check_arg(int ac, char **av)
{
	int i;
	int	j;
	std::string actual;
	std::string tmp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		actual = av[i];
		if (!str_is_digit(av[i]))
			return (0);
		while (j < i)
		{
			tmp = av[j];
			if (actual == tmp)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int main(int ac, char ** av) 
{
	std::vector<size_t>	vector;
	std::deque<size_t>	deque;
	Timer	timer;

	bool	debug = true;
	if (ac > 2 && check_arg(ac,av))
	{
		
		remplish(ac, av, vector);
		remplish(ac, av, deque);
		timer.StartChrono();
		algo(vector, "VECTOR", debug);
		std::cout << vert << "Time to process a range of " << ac - 1 << " elements with std::[std::vector] : " << reset;
		timer.StopChrono();
		std::cout << '\n' << std::endl;
		timer.StartChrono();
		algo(deque, "DEQUE", debug);
		std::cout << vert << "Time to process a range of " << ac - 1 << " elements with std::[std::deque] : " << reset;
		timer.StopChrono();
	}
	else
		std::cout << rouge << "Incorrect Arg" << reset << std::endl;
}
