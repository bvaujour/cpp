/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:59:51 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/07 10:30:14 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
	Span	a(10);
	Span	c;
	std::vector<int> vector;

	for (int i = 0; i < 10; i++)
		vector.push_back(-i * i);
	try
	{
		std::cout << "a.addNumber(vector);" << std::endl;
		a.addNumber(vector);
		a.displaySpan();
		c = a;
		c.displaySpan();
		std::cout << "Longest Span = " << a.longestSpan() << std::endl;
		std::cout << "shortest Span = " << a.shortestSpan() << std::endl;
		c.displaySpan();
		std::cout << "Longest Span = " << c.longestSpan() << std::endl;
		std::cout << "shortest Span = " << c.shortestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}