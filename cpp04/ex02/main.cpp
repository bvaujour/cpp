/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:26:09 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/16 16:20:47 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{


	const Animal* j = new Dog();
	j->makeSound();
	Dog	a;
	a.getBrain()->showIdeas();
	a.getBrain()->setIdeas("new");
	a.getBrain()->showIdeas();
	{
		Dog tmp;
		tmp.getBrain()->showIdeas();
		tmp = a;
		tmp.getBrain()->showIdeas();
	}
	delete j;





	// const Animal* j = new Cat();
	// const Animal* i = new Cat();
	// std::cout << "main delete now" << std::endl;
	// delete j;//should not create a leak
	// delete i;







	// Brain 	a;
	// Brain	b;
	// b.setIdeas("hello");
	// a = b;
	// a.showIdeas();
	// Dog	c;
	// Dog	d;
	
	// c = d;
	// {
	// 	Dog	e(c);
	// }
	// return 0;




	// int	n;
	// int	i;

	// i = 0;
	// n = 5;
	// const	Animal* tab[n];
	
	// while (i < n / 2)
	// {
	// 	tab[i] = new Dog();
	// 	i++;
	// }
	// while (i < n)
	// {
	// 	tab[i] = new Cat();
	// 	i++;
	// }
	// i = 0;
	// while (i < n)
	// {
	// 	tab[i]->makeSound();
	// 	delete tab[i];
	// 	i++;
	// }





	//Animal test;
}