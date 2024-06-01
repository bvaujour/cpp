/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:28:44 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 11:44:45 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"

static long double	atold(const std::string &input)
{
	int			i(0);
	long double	nb;
	int			sign(1);

	nb = 0;
	if (input[0] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (input[0] == '+')
		i++;
	while (input[i])
	{
		if (input[i] != '.')
			nb = nb * 10 + input[i] - 48;
		i++;
	}
	if (input.find('.') != std::string::npos)
		while (input[--i] != '.')
			nb /= 10;
	return (nb * sign);
}

static bool	fullzero(const std::string &input)
{
	int	i(0);

	while (input[i] == '0' || input[i] == 'f' || input[i] == '.')
		i++;
	if (!input[i])
		return (true);
	return (false);
}

static float atofloat(const std::string &input)
{
	int			i(0);
	float		nb(0);
	int			sign(1);

	if (input[0] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (input[0] == '+')
		i++;
	while (input[i] != 'f')
	{
		if (input[i] != '.')
			nb = nb * 10 + input[i] - 48;
		i++;
	}
	if (input.find('.') != std::string::npos)
		while (input[--i] != '.')
			nb /= 10;
	return (nb * sign);
}

static void	charConv(const std::string &input)
{
	char	c;

	// std::cout << "Char" << std::endl;
	if (std::atoi(input.c_str()) > std::numeric_limits<char>::max() || std::atoi(input.c_str()) < std::numeric_limits<char>::min())
	{
		std::cout << "CHAR litteral overflow CHAR size, casting impossible" << std::endl;
		return ;
	}
	if (input.length() == 3)
		c = input[1];
	else
		c = input[0];
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << '\'' << c << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void	intConv(const std::string &input)
{
	int	ibase;

	// std::cout << "Int" << std::endl;
	if (std::atol(input.c_str()) > std::numeric_limits<int>::max() || std::atol(input.c_str()) < std::numeric_limits<int>::min())
	{
		std::cout << "INT litteral overflow INT size, casting impossible" << std::endl;
		return ;
	}
	ibase = std::atoi(input.c_str());
	std::cout << "char: ";
	if (std::isprint(static_cast<char>(ibase)))
		std::cout << '\'' << static_cast<char>(ibase) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << ibase << std::endl;
	std::cout << "float: " << static_cast<float>(ibase) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(ibase) << ".0" << std::endl;
}

static void	floatConv(const std::string &input)
{
	float	fbase;
	double	check;

	// std::cout << "Float" << std::endl;
	check = std::atof(input.c_str());
	if (!fullzero(input) && (check > FLT_MAX ||check < FLT_MIN || (check > 0 && check < std::numeric_limits<float>::min())))
	{
		std::cout << "FLOAT litteral overflow FLOAT size, casting impossible" << std::endl;
		return ;
	}
	fbase = atofloat(input);
	std::cout << "char: ";
	if (std::isprint(static_cast<char>(fbase)))
		std::cout << '\'' << static_cast<char>(fbase) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(fbase) << std::endl;
	if (input[input.length() - 2] == '0' && input.find('.') == input.length() - 3)
	{
		std::cout << "float: " << fbase << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(fbase) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << fbase << 'f' << std::endl;
		std::cout << "double: " << static_cast<double>(fbase) << std::endl;
	}
}

static void	doubleConv(const std::string &input)
{
	double		dbase;
	long double	check;

	// std::cout << "Double" << std::endl;
	check = atold(input);
	if (!fullzero(input) && (check > DBL_MAX || check < DBL_MIN || (check > 0 && check < std::numeric_limits<double>::min())))
	{
		std::cout << "DOUBLE litteral overflow DOUBLE size, casting impossible" << std::endl;
		return ;
	}
	dbase = std::atof(input.c_str());
	std::cout << "char: ";
	if (std::isprint(static_cast<char>(dbase)))
		std::cout << '\'' << static_cast<char>(dbase) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	
	std::cout << "int: " << static_cast<int>(dbase) << std::endl;
	if (input[input.length() - 1] == '0' && input.find('.') == input.length() - 2)
	{
		std::cout << "float: " << static_cast<float>(dbase) << ".0f" << std::endl;
		std::cout << "double: " << dbase << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(dbase) << 'f' << std::endl;
		std::cout << "double: " << dbase << std::endl;
	}
}

static void	noConv(const std::string &input)
{
	(void)input;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

static void	science(const std::string &input)
{
	// std::cout << "Science??" << std::endl;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
	{
		std::cout << "float: " << input[0] << std::numeric_limits<float>::infinity() << 'f' << std::endl;
		std::cout << "double: " << input[0] << std::numeric_limits<double>::infinity() << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

static int	FindType(const std::string &input)
{
	unsigned long	i(0);
	bool			incr(false);

	if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
		return (1);
	if ((input.length() == 3 && input[0] == '\'' && input[0] == '\'') || (input.length() == 1 && !std::isdigit(input[0])))
		return (0);
	if (input[0] == '+' || input[0] == '-')
		i++;
	while (input[i] && std::isdigit(input[i]))
		i++;
	if (i == input.length())
		return (2);
	if (input[i] == '.')
	{
		i++;
		while (input[i] && std::isdigit(input[i]))
		{
			i++;
			incr = true;
		}
	}
	if (incr == true && i == input.length())
		return (4);
	if (incr == true && input[i] == 'f' && i + 1 == input.length())
		return (3);
	return (5);
}


void	ScalarConvertion::convert(const std::string &input)
{
	int	type;

	type = FindType(input);
	void (*f[6])(const std::string &) = {&charConv, &science, &intConv, &floatConv, &doubleConv, &noConv};
	f[type](input);
}
