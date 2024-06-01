/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:45:46 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 11:52:26 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data	data;
	Data	*datarestored;

	data.a = 42;
	data.str = "l'addresse de ma structure sera une information en uintptr";

	std::cout << "CONTENU AVANT SERIALIZE\n" << std::endl;
	std::cout << "addresse de la structure = " << &data << std::endl;
	std::cout << "data.a = " << data.a << std::endl;
	std::cout << "data.str = " << data.str << std::endl;

	uintptr_t save = Serializer::serialize(&data);
	datarestored = Serializer::deserialize(save);
	
	std::cout << "\n\nCONTENU APRES SERIALIZE\n" << std::endl;
	std::cout << "addresse de la structure = " << datarestored << std::endl;
	std::cout << "datarestored->a = " << datarestored->a << std::endl;
	std::cout << "datarestored->str = " << datarestored->str << std::endl;

	
}
