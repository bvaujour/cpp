/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:26:15 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/18 14:35:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <time.h>
#include <iostream>

Base* generate(void)
{
	int	a;

	a = std::rand() % 3;
	switch (a)
	{
		case 0:
			return(new A);
		case 1:
			return(new B);
		case 2:
			return(new C);
	}
	return (NULL);
}

void identify(Base& p)
{
	std::cout << "\nentering function void identify(Base& p)\n" << std::endl;
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Class identified as A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "A: exception catched: " << e.what() << '\n';
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Class identified as B" << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << "B: exception catched: " << e.what() << '\n';
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "Class identified as C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << "C: exception catched: " << e.what() << '\n';
			}
		}
	}
}

void identify(Base* p)
{
	std::cout << "\nentering function void identify(Base* p)\n" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "dynamic_cast<A*>(p) == true" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "dynamic_cast<B*>(p) == true" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "dynamic_cast<C*>(p) == true" << std::endl;
}

int main()
{
	std::srand(time(NULL));
	Base *a = generate();
	identify(*a);
	identify(a);
	delete a;
}
