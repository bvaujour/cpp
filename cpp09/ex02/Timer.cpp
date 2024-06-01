/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:28:09 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/30 18:51:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Timer.hpp"

Timer::Timer()
{
}

Timer::Timer(const Timer& toCpy) : _start(toCpy._start)
{
	
}

Timer &Timer::operator=(const Timer& toCpy)
{
	_start = toCpy._start;
	return (*this);
}

Timer::~Timer()
{
	
}

void Timer::StopChrono()
{
	double TimeElasped;

	gettimeofday(&_tv, NULL);
	TimeElasped = static_cast<double>(_tv.tv_sec * 1000000 + _tv.tv_usec - _start) / 1000000;
	std::cout << std::fixed << TimeElasped << " seconds" << std::endl;
}

void	Timer::StartChrono()
{
	gettimeofday(&_tv, NULL);
	_start = _tv.tv_sec * 1000000 + _tv.tv_usec;
}

