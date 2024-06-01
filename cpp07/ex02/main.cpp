/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:59:11 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 12:51:24 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main()
{
	try
	{

		std::cout << "Array<int> a(1000);\nArray<int> b(a);\nArray<int> c;\nc = b;" << std::endl;
		Array<int> a(1000);
		Array<int> b(a);
		Array<int> c;
		c = b;


		
		std::cout << "std::cout << c.size() << std::endl;\n\
std::cout << a[3] << std::endl;\n\
std::cout << b[30] << std::endl;\n\
std::cout << c[300] << std::endl;" << std::endl;

		
		std::cout << c.size() << std::endl;
		std::cout << a[3] << std::endl;
		std::cout << b[30] << std::endl;
		std::cout << c[300] << std::endl;

		
		std::cout << "c[0] = 1;\n\
std::cout << c[0] << std::endl;\n\
std::cout << c[-1] << std::endl;" << std::endl;

		c[0] = 1;
		std::cout << c[0] << std::endl;
		std::cout << c[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}