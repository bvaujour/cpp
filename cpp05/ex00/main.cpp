/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/03 17:39:59 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		
		Bureaucrat	a("Alban", 2); // a Bureaucrate must have a grade between 1 and 150
		Bureaucrat b;
		b = a;
		Bureaucrat	c(a);
		std::cout << "TEST 0 " << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		
		Bureaucrat	a("Bob", 151); // a Bureaucrate must have a grade between 1 and 150
		Bureaucrat b(a);
		std::cout << "TEST 1 " << b << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat	a("Charles", 0); // a Bureaucrate must have a grade between 1 and 150
		std::cout << "TEST 2 " <<  a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat	a("David", 150);
		std::cout <<  "TEST 3 " << a << std::endl; // doit s'ecrire
		a.downgrade();
		std::cout << a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat	a("Eric", 1);
		std::cout << "TEST 4 " << a << std::endl; // doit s'ecrire
		a.upgrade();
		std::cout << a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
}