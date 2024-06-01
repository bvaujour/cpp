/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:14:29 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/11 15:04:41 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINDEXCHANGE_HPP
# define BITCOINDEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <cstdlib>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <string>

class	BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &toCpy);
		BitcoinExchange	&operator=(const BitcoinExchange &toCpy);
		class DataErrorExc : public std::exception
		{
			virtual const char	*what() const throw();
		};
		
		BitcoinExchange(const std::string &input);
	private:
		std::map<std::string, float>	_DB;
		void	OpenData();
		void	OpenInput(const std::string &input);
		void	ChangeRate(const std::string &key, const std::string &value);
};

#endif