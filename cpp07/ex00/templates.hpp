/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:47:30 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 12:23:14 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template<typename T>
const T&	max(T const &a, T const &b)
{
	if (a >= b)
		return (a);
	return (b);
}

template<typename T>
const T&	min(T const &a, T const &b)
{
	if (a >= b)
		return (b);
	return (a);
}

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}