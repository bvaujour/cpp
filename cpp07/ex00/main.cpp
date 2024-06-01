/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:18:19 by bvaujour          #+#    #+#             */
/*   Updated: 2024/02/09 15:27:12 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main()
{
	int	a = 4;
	int	b = 3;
	
	std::string str1("hello guys");
	std::string str2("chalut");

	std::cout << "a = " << a <<std::endl;
	std::cout << "b = " << b <<std::endl;
	std::cout << "str1 = " << str1 <<std::endl;
	std::cout << "str2 = " << str2 <<std::endl;
	std::cout << "max entre a et b = " << max<float>(a, b) <<std::endl;
	swap(a, b);
	std::cout << "a apres swap(a, b) = " << a << std::endl;
	swap(str1, str2);
	std::cout << "str1 apres swap(str1, str2) = " << str1 << std::endl;

	return 0;
}
