/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:31:17 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/23 12:51:53 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main()
{
	int	tab[5] = {6, 3, 9, -1, 0};

	int i(0);
	std::cout << "int Tab[]:" << std::endl;
	while (i < 5)
	{
		std::cout << tab[i] << std::endl;
		i++;
	}
	iter<int>(tab, 5, &incr<int>);
	std::cout << "int Tab[] after iter<int>(tab, 5, &incr<int>):" << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << tab[i] << std::endl;
		i++;
	}
	iter<int>(tab, 5, &null<int>);
	std::cout << "int Tab[] after iter<int>(tab, 5, &null<int>):" << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << tab[i] << std::endl;
		i++;
	}




	
	char str[5] = {'h', 'e', 'l', 'l', 'o'};
	
	std::cout << "char str[]:" << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << str[i] << std::endl;
		i++;
	}
	iter<char>(str, 5, &incr<char>);
	std::cout << "char str[] apres iter<char>(str, 5, &incr<char>):" << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << str[i] << std::endl;
		i++;
	}
	iter<char>(str, 5, &null<char>);
	std::cout << "char str[] apres iter<char>(str, 5, &null<char>):" << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << str[i] << std::endl;
		i++;
	}
}

