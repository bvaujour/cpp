/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:49:42 by bvaujour          #+#    #+#             */
/*   Updated: 2024/03/28 11:21:43 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>
# include <algorithm>
# include <list>

template<typename T>

class	MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &toCpy);
		virtual ~MutantStack();
		MutantStack &operator=(const MutantStack &toCpy);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void)
		{
			return (std::stack<T>::c.begin());
		}
  		iterator end(void)
		{
			return (std::stack<T>::c.end());
		}
};

#endif