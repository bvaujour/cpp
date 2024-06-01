/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:20:58 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/03 13:28:29 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "\nPHONEBOOK INITIALISATION..." << std::endl;
	std::cout << "\nUse following options :\ntype \"ADD\" to add a new contact (8 contacts maximum)" << std::endl;
	std::cout << "type \"SEARCH\" to access a contacts informations" << std::endl;
	std::cout << "type \"EXIT\" to close the PhoneBook\n" << std::endl;
	
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	static int i = 0;
	std::string	input;

	if (i > 7)
	{
		while (input != "y" && input != "n")
		{
			std::cout << "\nADD new contact will delete contact " << (i % 8) + 1 << "\ncontinue(y/n)?" << std::endl;
			std::getline(std::cin, input);
		}
		if (input == "n")
			return ;
	}
	std::cout << "\nADDING new contact\n\nEnter FIRST NAME:" << std::endl;
	std::getline(std::cin, input);
	_contacts[i % 8].setfirstName(input);
	std::cout << "\nEnter LAST NAME:" << std::endl;
	std::getline(std::cin, input);
	_contacts[i % 8].setlastName(input);
	std::cout << "\nEnter NICKNAME:" << std::endl;
	std::getline(std::cin, input);
	_contacts[i % 8].setnickName(input);
	std::cout << "\nEnter PHONE NUMBER:" << std::endl;
	std::getline(std::cin, input);
	_contacts[i % 8].setphoneNumber(input);
	std::cout << "\nEnter DARKEST SECRET:" << std::endl;
	std::getline(std::cin, input);
	_contacts[i % 8].setdarkestSecret(input);
	std::cout << "\nNew contact created\n" << std::endl;
	i++;
}

void	PhoneBook::search()
{
	int	i;
	std::string	input;

	i = 0;
	std::cout << std::setw(10) << "index" << '|' << std::setw(10) << "first name" << '|' << std::setw(10) << "last name" << '|' << std::setw(10) << "nickname" << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		if (_contacts[i].getfirstName().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getfirstName().substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << _contacts[i].getfirstName() << '|';
		if (_contacts[i].getlastName().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getlastName().substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << _contacts[i].getlastName() << '|';
		if (_contacts[i].getnickName().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getnickName().substr(0, 9) + "." << '|' << std::endl;
		else
			std::cout << std::setw(10) << _contacts[i].getnickName() << '|' << std::endl;
		i++;
	}
	std::cout << "\nSelect a contact to print more details\nEnter a contact index (1 to 8):" << std::endl;
	std::getline(std::cin, input);
	while (input.length() != 1 || input.at(0) < 49 || input.at(0) > 56)
	{
		std::cout << "\nSelect a contact to print more details\nEnter a contact index (1 to 8):" << std::endl;
		std::getline(std::cin, input);
	}
	i =  input.at(0) - 49;
	std::cout << "\nFirst name:     " << _contacts[i].getfirstName() << std::endl;
	std::cout << "\nLast name:      " << _contacts[i].getlastName() << std::endl;
	std::cout << "\nNickname:       " << _contacts[i].getnickName() << std::endl;
	std::cout << "\nPhone number:   " << _contacts[i].getphoneNumber() << std::endl;
	std::cout << "\nDarkest secret: " << _contacts[i].getdarkestSecret() << std::endl;
}