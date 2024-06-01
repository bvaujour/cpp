/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:39 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/31 10:12:03 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) 
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << Fixed::min( 6.0f, 6.0f ) << std::endl;

// 	return 0;
// }

int	main()
{
	Fixed a1(1);
	Fixed a2(1);
	Fixed b(2);

	std::cout << "a1 = 1 / a2 = 1 / b = 2\n" << std::endl;
	if (a1 == a2)
		std::cout << "TEST a1 == a2" << std::endl;
	if (a1 != b)
		std::cout << "TEST a1 != b" << std::endl;
	if (a1 < b)
		std::cout << "TEST a1 < b" << std::endl;
	if (b > a1)
		std::cout << "TEST b > a1" << std::endl;
	if (a2 >= a1)
		std::cout << "TEST a2 >= a1" << std::endl;
	if (a1 <= b)
		std::cout << "TEST a1 <= b" << std::endl;
	if (a1 + a2 * b / (a1 - b) != 0)
		std::cout << "TEST a1 + a2 * b / (a1 - b) != 0\nAlors ça fait combien?" << std::endl;
}