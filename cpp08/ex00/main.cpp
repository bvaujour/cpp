/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:59:51 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/06 13:42:03 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	vector_test(void)
{
	int	TOFIND = 5;
	int	i;
	std::vector<int> vec;

	std::cout << "INIT A VECTOR WITH JUST ODD NUMBERS BUT A 2 AT END\n\n" << std::endl;
	std::cout << "TOFIND = " << TOFIND << std::endl;
	i = 0;
	while (i < 100)
	{
		vec.push_back(i * 2 + 1);
		i++;
	}
	vec.push_back(2);
	try
	{
		std::cout << easyfind(vec, TOFIND) << std::endl;
		std::cout << "Success\n\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void	list_test(void)
{
	int	TOFIND = 4;
	int	i;
	std::list<int> l;

	std::cout << "INIT A LIST WITH JUST ODD NUMBERS BUT A 2 AT END\n\n" << std::endl;
	std::cout << "TOFIND = " << TOFIND << std::endl;
	i = 0;
	while (i < 100)
	{
		l.push_back(i * 2 + 1);
		i++;
	}
	l.push_back(2);
	try
	{
		std::cout << easyfind(l, TOFIND) << std::endl;
		std::cout << "Success" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	vector_test();
	list_test();
}