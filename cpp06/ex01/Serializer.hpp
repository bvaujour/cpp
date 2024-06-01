/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:12:15 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/18 14:46:21 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

typedef	struct s_data
{
	int	a;
	std::string	str;
	
}	Data;

class	Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &toCpy);
		Serializer &operator=(const Serializer &toCpy);
	public:
		static Data *deserialize(uintptr_t raw);
		static uintptr_t serialize(Data* ptr);
};