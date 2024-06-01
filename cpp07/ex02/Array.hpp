/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:27 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 12:43:34 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template<typename T>

class	Array
{
	public:
		Array();
		Array(const Array &toCpy);
		Array	&operator=(const Array &toCpy);
		~Array();
		Array(unsigned int n);
		unsigned int	size();
		T	&operator[](unsigned int i);
	private:
		T				*_tab;
		unsigned int	_size;
};