/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:54:56 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/03 13:23:52 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		std::string		getfirstName() const;
		std::string		getlastName() const;
		std::string		getnickName() const;
		std::string		getphoneNumber() const;
		std::string		getdarkestSecret() const;
		void			setfirstName(const std::string &n);
		void			setlastName(const std::string &n);
		void			setnickName(const std::string &n);
		void			setphoneNumber(const std::string &n);
		void			setdarkestSecret(const std::string &n);
	private:
		std::string		firstName;
		std::string 	lastName;
		std::string 	nickName;
		std::string 	phoneNumber;
		std::string 	darkestSecret;
};

#endif