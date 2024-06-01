/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 15:38:01 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		std::cout	<< "TEST0 COPY ASSIGN" << std::endl;
		PresidentialPardonForm	a("lol");
		PresidentialPardonForm	d(a);

		ShrubberyCreationForm	b;
		RobotomyRequestForm		c;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;


	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout	<< "TEST1 TOO LOW TO SIGN -> Form is too high to be signed" << std::endl;
		Bureaucrat	bob("bob", 146);
		ShrubberyCreationForm	b("hello");
		b.beSigned(bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout	<< "TEST2 Form is too high to be exc" << std::endl;
		Bureaucrat	bob("bob", 145);
		ShrubberyCreationForm	b("hello");
		b.beSigned(bob);
		b.execute(bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout	<< "TEST1 TOO LOW TO SIGN -> Form is too high to be signed" << std::endl;
		Bureaucrat	bob("bob", 146);
		ShrubberyCreationForm	b("hello");
		b.beSigned(bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout	<< "TEST2 Working ShrubberyCreationForm " << std::endl;
		Bureaucrat	bob("bob", 137);
		ShrubberyCreationForm	b("hello");
		b.beSigned(bob);
		b.execute(bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout	<< "TEST3 Working PresidentialPardonForm" << std::endl;
		Bureaucrat	bob("bob", 5);
		PresidentialPardonForm	b("hello");
		b.beSigned(bob);
		b.execute(bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout	<< "TEST3 Working RobotomyRequestForm" << std::endl;
		Bureaucrat	bob("bob", 45);
		RobotomyRequestForm	b("hello");
		b.beSigned(bob);
		b.execute(bob);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}