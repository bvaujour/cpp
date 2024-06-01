/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:53:41 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/30 18:55:33 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cctype>
# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib>

#include "Timer.hpp"

#define rouge "\033[31m"
#define vert "\033[32m"
#define jaune "\033[33m"
#define bleu "\033[34m"
#define violet "\033[35m"
#define cyan "\033[36m"
#define blanc "\033[37m"
#define reset "\033[0m"

template <typename T>
void	PrintContainer(T& ctn, const std::string& name)
{
	size_t	i(0);

	std::cout << vert << name << ':' << reset;
	while (i < ctn.size())
	{
		std::cout << ' ' << ctn[i];
		i++;
	}
	std::cout << std::endl;
}

template <typename T>
void	PrintPairs(T& A, T& B, const std::string& header)
{
	size_t	i(0);

	std::cout << "\n" << header << std::endl;
	std::cout << "----------------------------------" << std::endl;
	while (i < A.size())
	{
		std::cout << "A = {" << A[i] << ", " << B[i] << "} = B" << std::endl;
		i++;
	}
	if (i < B.size())
		std::cout << "A = {..., " << B[i] << "} = B" << std::endl;
	std::cout << "\n" << std::endl;
}

template <typename T>
void	FirstStep(T& ctn, T& A, T& B, std::vector< std::pair<size_t, size_t> >& paires)
{
	size_t n = ctn.size();

	for (size_t i = 0; i < n - 1; i += 2)
	{
		std::pair<int, int> paire;

		if (ctn[i] > ctn[i + 1])
			paire = std::make_pair(ctn[i], ctn[i + 1]);
		else
			paire = std::make_pair(ctn[i + 1], ctn[i]);
		paires.push_back(paire);
		A.push_back(paire.first);
		B.push_back(paire.second);
	}
	if (n % 2 != 0)
		B.push_back(ctn[n - 1]);
}

template <typename T>
void merge(T& ctn, size_t left, size_t mid, size_t right)
{
	size_t	n1;
	size_t	n2;
	size_t	i;
	size_t	j;
	size_t	k;
	T leftSub(ctn.begin() + left, ctn.begin() + mid + 1);
	T rightSub(ctn.begin() + mid + 1, ctn.begin() + right + 1);

	n1 = mid - left + 1;
	n2 = right - mid;
	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if (leftSub[i] <= rightSub[j]) 
			ctn[k] = leftSub[i++];
		else
			ctn[k] = rightSub[j++];
		k++;
	}
	while (i < n1)
		ctn[k++] = leftSub[i++];
	while (j < n2)
		ctn[k++] = rightSub[j++];
}

template <typename T>
void mergeSort(T& ctn, size_t left, size_t right)
{
	size_t	mid;

	if (left < right)
	{
		mid = left + (right - left) / 2;
		mergeSort(ctn, left, mid);
		mergeSort(ctn, mid + 1, right);
		merge(ctn, left, mid, right);
	}
}

template <typename T>
void binaryInsertList(T& A, T& B)
{
	typename T::iterator it_A;
	typename T::const_iterator it_B;

	it_B = B.begin();
	while (it_B != B.end())
	{
		it_A = std::lower_bound(A.begin(), A.end(), *it_B);
		A.insert(it_A, *it_B);
		it_B++;
	}
}

template <typename T>
void	mirrorSort(T& A, T& B, std::vector< std::pair<size_t, size_t> >& save_paires)
{
	size_t i(0);
	size_t	j;

	while (i < A.size())
	{
		j = 0;
		while (j < save_paires.size() && A[i] != save_paires[j].first)
			j++;
		B[i] = save_paires[j].second;
		i++;
	}
}

template <typename T>
void	algo(T&	ctn, const std::string& name, bool debug)
{
	T A;
	T B;
	std::vector< std::pair<size_t, size_t> > save_paires;

	if (debug)
		std::cout << "\n//////////////   ALGO FOR  " << name  << "   //////////////" << std::endl;
	PrintContainer(ctn, "Before");
	FirstStep(ctn, A, B, save_paires);
	if (debug)
		PrintPairs(A, B, "PrintPairs AFTER FIRSTEP");
	mergeSort(A, 0, A.size() - 1);
	if (debug)
		PrintPairs(A, B, "PrintPairs AFTER MERGESORT");
	mirrorSort(A, B, save_paires);
	if (debug)
		PrintPairs(A, B, "PrintPairs AFTER MIRROR");
	binaryInsertList(A, B);
	PrintContainer(A, "After");
}

template <typename T>
void	remplish(int ac, char **av, T& ctn)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ctn.push_back(std::atoi(av[i]));
		i++;
	}
}