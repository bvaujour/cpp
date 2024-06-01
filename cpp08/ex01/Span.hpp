/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:42:37 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/07 10:23:53 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
 #define SPAN_HPP
 
 
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span &toCpy);
		~Span();
		Span	&operator=(Span &toCpy);
		class	TabIsFull : public std::exception
		{
			virtual const char *what() const throw();
		};
		class	ToFewElement : public std::exception
		{
			virtual const char *what() const throw();
		};
		void	addNumber(int toAdd);
		int		shortestSpan();
		int		longestSpan();
		void	displaySpan();
		template<typename CONTAINER>
		void	addNumber(CONTAINER &ctn)
		{
			typename CONTAINER::iterator it;
			std::cout << "Add Range of numbers\n" << std::endl;
			it = ctn.begin();
			while (it != ctn.end())
			{
				addNumber(*it);
				it++;
			}
		}
	private:
		unsigned int		_maxSize;
		unsigned int		_actualSize;
		std::vector<int>	_vector;
		
};

#endif