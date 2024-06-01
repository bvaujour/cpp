/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 17:03:52 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		std::cout	<< "TEST0 Showing Attribute" << std::endl;
		PresidentialPardonForm	a;
		ShrubberyCreationForm	b;
		RobotomyRequestForm		c;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat	bur("GOD", 1);
		Intern	intern;
		AForm	*a = intern.MakeForm("PresidentialPardonForm", "lol");
		// bur.signForm(*a);
		bur.executeForm(*a);
		delete	a;
		AForm	*b = intern.MakeForm("ShrubberyCreationForm", "lol");
		bur.signForm(*b);
		bur.executeForm(*b);
		delete	b;
		AForm	*c = intern.MakeForm("RobotomyRequestForm", "lol");
		bur.signForm(*c);
		bur.executeForm(*c);
		delete	c;


	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	
}