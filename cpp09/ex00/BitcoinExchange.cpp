/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:28:41 by bvaujour          #+#    #+#             */
/*   Updated: 2024/05/07 09:31:07 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCpy): _DB(toCpy._DB)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &toCpy)
{
	_DB = toCpy._DB;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const std::string &input)
{
	OpenData();
	OpenInput(input);
}

const char	*BitcoinExchange::DataErrorExc::what() const throw()
{
	return ("DataBase File Error");
}

int		is_full_digit(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int		is_correct_mounth(int mounth)
{
	if (mounth < 1 || mounth > 12)
		return (0);
	return (1);
}

int		is_correct_day(int day, int mounth, int date)
{
	if (day < 1 || day > 31)
		return (0);
	if (mounth == 2 && day > 29)
		return (0);
	if (mounth == 2 && day > 28 && date % 4 != 0)
		return (0);
	if ((mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11) && day > 30)
		return (0);
	return (1);
}
int	check_date(std::string key)
{
	std::istringstream	iss;
	std::string	part;
	int	i;
	int	mounth;
	int	date;

	i = 0;
	iss.str(key);
	std::getline(iss, part, '-');
	if (!is_full_digit(part))
	{
		std::cout << "Error: invalid format date " << key << std::endl;
		return (0);
	}
	date = std::atoi(part.c_str());
	std::getline(iss, part, '-');
	mounth = std::atoi(part.c_str());
	if (!is_full_digit(part) || !is_correct_mounth(mounth))
	{
		std::cout << "Error: invalid format mounth " << key << std::endl;
		return (0);
	}
	std::getline(iss, part);
	if (!is_full_digit(part) || !is_correct_day(std::atoi(part.c_str()), mounth, date))
	{
		std::cout << "Error: invalid format day " << key << std::endl;
		return (0);
	}
	return (1);
}

int			CompareDate(const std::string key_input, const std::string key_DB)
{
	std::istringstream	iss;
	std::string			date_input;
	std::string			date_DB;
	std::string			mounth_input;
	std::string			mounth_DB;
	std::string			day_input;
	std::string			day_DB;

	iss.str(key_DB);
	std::getline(iss, date_DB, '-');
	std::getline(iss, mounth_DB, '-');
	std::getline(iss, day_DB);
	iss.clear();
	iss.str(key_input);
	std::getline(iss, date_input, '-');
	std::getline(iss, mounth_input, '-');
	std::getline(iss, day_input);
	if (std::atoi(date_DB.c_str()) > std::atoi(date_input.c_str()))
		return (0);
	else if ( std::atoi(date_DB.c_str()) == std::atoi(date_input.c_str()) && std::atoi(mounth_DB.c_str()) > std::atoi(mounth_input.c_str()))
		return (0);
	else if (std::atoi(date_DB.c_str()) == std::atoi(date_input.c_str()) && std::atoi(mounth_DB.c_str()) == std::atoi(mounth_input.c_str()) && std::atoi(day_DB.c_str()) >= std::atoi(day_input.c_str()))
		return (0);
	return (1);
}

void		BitcoinExchange::ChangeRate(const std::string &key, const std::string &value)
{
	std::map<std::string, float>::iterator it;

	it = _DB.begin();
	while (it != _DB.end() && CompareDate(key, it->first))
			it++;
	if (it == _DB.end())
	{
		it--;
		// std::cout << "closest date found = " << it->first << ' ';
		std::cout << key << " => " << std::atof(value.c_str()) << " = " << std::atof(value.c_str()) * it->second << std::endl;
	}
	else if (it->first == key)
	{
		// std::cout << "closest date found = " << it->first << ' ';
		std::cout << key << " => " << std::atof(value.c_str()) << " = " << std::atof(value.c_str()) * it->second << std::endl;
		return ;
	}
	else if (it == _DB.begin())
		std::cout << "Error: date must be further 2009-01-02" << std::endl;
	else
	{
		it--;
		// std::cout << "closest date found = " << it->first << ' ';
		std::cout << key << " => " << std::atof(value.c_str()) << " = " << std::atof(value.c_str()) * it->second << std::endl;
	}
}

void		BitcoinExchange::OpenInput(const std::string &input)
{
	std::ifstream		file;
	std::istringstream	iss;
	std::string			line;
	std::string 		key;
	std::string			value;

	file.open(input.c_str());
	if (!file.is_open())
		throw (DataErrorExc());
	std::getline(file, line);
	if (line != "date | value")
		throw(DataErrorExc());
	while (std::getline(file, line))
	{
        iss.clear();
		iss.str(line);
        std::getline(iss, key, '|');
		key = key.substr(key.find_first_not_of((" \n\r\t")), key.find_last_not_of(" \n\r\t") + 1);
		if (!check_date(key))
			continue ;
		std::getline(iss, value);
		if (std::atof(value.c_str()) < 0 || std::atof(value.c_str()) > 1000)
		{
			std::cout << "Error: Value must be between 0 and 1000" << std::endl;
			continue ;
		}
		ChangeRate(key, value);
    }
	file.close(); 
}

void		BitcoinExchange::OpenData()
{
	std::ifstream		file;
	std::istringstream	iss;
	std::string			line;
	std::string 		key;
	std::string			value;

	file.open("data.csv");
	if (!file.is_open())
		throw (DataErrorExc());
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw(DataErrorExc());
	while (std::getline(file, line))
	{
        iss.clear();
		iss.str(line);
        std::getline(iss, key, ',');
		if (!check_date(key))
			throw (DataErrorExc());
		std::getline(iss, value, ',');
		if (std::atof(value.c_str()) < 0)
			throw (DataErrorExc());
		_DB[key] = atof(value.c_str());
    }
	file.close(); 
}
