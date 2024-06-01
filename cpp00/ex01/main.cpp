/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:12:03 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/03 13:34:18 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	rep;
	std::string	input;

	while (input != "EXIT")
	{
		std::cout << "(ADD/SEARCH/EXIT): ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "std::cin closed. PhoneBook OFF" << std::endl;
			break ;
		}
		if (input == "ADD")
			rep.add();
		else if (input == "SEARCH")
			rep.search();
	}
	return (0);
}