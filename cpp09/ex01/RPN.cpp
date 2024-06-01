/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:42:26 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/11 16:58:09 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "RPN only usable with Assign construction" << std::endl;
}
RPN::RPN(const std::string &input)
{
	if (!ParseInput(input))
	{
		StockInput(input);
		Calculate();
	}
}

RPN::RPN(const RPN &toCpy)
{
	std::cout << "RPN only usable with Assign construction" << std::endl;
	(void)toCpy;
}

RPN	&RPN::operator=(const RPN &toCpy)
{
	std::cout << "RPN only usable with Assign construction" << std::endl;
	(void)toCpy;
	return (*this);
}

RPN::~RPN()
{
}

int		RPN::ParseInput(const std::string &input)
{
	std::istringstream	iss(input);
	std::string	part;

	iss >> part;
	if (part.length() > 1 || !std::isdigit(part[0]))
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	while (iss >> part)
	{
		if (part.length() > 1 || !std::isdigit(part[0]))
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		iss >> part;
		if (part.length() != 1 || (part[0] != '+' && part[0] != '-' && part[0] != '*' && part[0] != '/'))
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
	}
	return (0);
}
void	RPN::Calculate()
{
	std::string			part;
	float				num1(0);
	float				num2(0);

	part = _stack.top();
	_stack.pop();
	num1 = std::atof(part.c_str());
	while (_stack.size())
	{
		part = _stack.top();
		_stack.pop();
		num2 = std::atof(part.c_str());
		part = _stack.top();
		_stack.pop();
		if (part[0] == '+')
			num1 += num2;
		else if (part[0] == '-')
			num1 -= num2;
		else if (part[0] == '*')
			num1 *= num2;
		else if (part[0] == '/')
			num1 /= num2;
	}
	std::cout << num1 << std::endl;
}
void	RPN::StockInput(const std::string &input)
{
	int	i;

	i =  input.length() - 1;
	while (i >= 0)
	{
		if (input[i] != ' ')
			_stack.push(input[i]);
		i--;
	}
}
