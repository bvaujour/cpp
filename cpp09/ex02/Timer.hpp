/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:28:01 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/19 15:19:34 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <ctime>
# include <sys/time.h>
# include <iomanip>
# include <iostream>

class Timer
{
	public:
		Timer();
		Timer(const Timer& toCpy);
		Timer	&operator=(const Timer& toCpy);
		void	StartChrono();
		void	StopChrono();
		~Timer();
	private:
		timeval _tv;
		time_t _start;
};