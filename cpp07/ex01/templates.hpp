/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:32:20 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/17 12:28:12 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template<typename T, typename U>
void	iter(T *tab, int size, void  (*f)(U&))
{
	int	i(0);

	while (i < size)
	{
		f(tab[i]);
		i++;
	}
}

template<typename T>
void	incr(T &a)
{
	a += 1;
}

template<typename T>
void	null(T &a)
{
	a = 0;
}