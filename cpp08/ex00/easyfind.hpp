/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:04:46 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/06 13:40:55 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <string_view>

template<typename CONTAINER>
int	easyfind(CONTAINER &ctn, int a)
{
	typename CONTAINER::iterator it;
	it = std::find(ctn.begin(), ctn.end(), a);
	if (it == ctn.end())
		throw (std::out_of_range("Exception received."));
	return (*it);
}