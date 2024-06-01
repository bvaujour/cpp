/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:40:30 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/11 16:17:16 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <fstream>
# include <cstdlib>
# include <sstream>
# include <cctype>
# include <cstdlib>
# include <string>

class RPN
{
	private:
		std::stack<char>	_stack;
		void				StockInput(const std::string &input);
		void				Calculate();
		int					ParseInput(const std::string &input);

	public:
		RPN();
		RPN(const std::string &input);
		RPN(const RPN &toCpy);
		RPN	&operator=(const RPN &toCpy);
		~RPN();
};

#endif