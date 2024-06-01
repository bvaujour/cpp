/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 14:10:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "BASIC TEST" << std::endl;
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form	a("contrat", 25, 1);
		Form	b(a);
		Form	c;
		c = b;
		std::cout << "a:" << a << std::endl;
		std::cout << "c:" << c << std::endl;
		std::cout << "a:" << a << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 151, 2); // fail
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 0, 2); // fail
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 1, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 150, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nSIGN FORM TEST" << std::endl;
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 100, 2);
		Bureaucrat	bob("bob", 100);
		a.beSigned(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 99, 2);
		Bureaucrat	bob("bob", 100);
		a.beSigned(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 0, 2);
		Bureaucrat	bob("bob", 100);
		a.beSigned(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------------------------------------------------------------------\n" << std::endl;
	try
	{
		Form		a("contrat", 151, 2);
		Bureaucrat	bob("bob", 100);
		a.beSigned(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}