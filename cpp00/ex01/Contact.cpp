/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:06:41 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/03 13:31:19 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string		Contact::getfirstName() const
{
	return (firstName);
}
std::string		Contact::getlastName() const
{
	return (lastName);
}
std::string		Contact::getnickName() const
{
	return (nickName);
}
std::string		Contact::getphoneNumber() const
{
	return (phoneNumber);
}
std::string		Contact::getdarkestSecret() const
{
	return (darkestSecret);
}

void			Contact::setfirstName(const std::string &n)
{
	firstName = n;
}

void			Contact::setlastName(const std::string &n)
{
	lastName = n;
}

void			Contact::setnickName(const std::string &n)
{
	nickName = n;
}

void			Contact::setphoneNumber(const std::string &n)
{
	phoneNumber = n;
}

void			Contact::setdarkestSecret(const std::string &n)
{
	darkestSecret = n;
}
