/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:26:09 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/17 12:45:37 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


// int	main()
// {
// 	Animal	a;
// 	Animal	b;

// 	a.setType("chat");
// 	std::cout << "type of b: " << b.getType() << std::endl;
// 	b = a;
// 	std::cout << "type of b: " << b.getType() << std::endl;
// 	b.makeSound();
// 	std::cout << "End of Animal tests \n\n" << std::endl;
// 	///////////////////////////////////////////////////////
	
// 	Dog	c;
// 	Dog d;
// 	c = d;
	
// 	Cat e;
// 	e.makeSound();
	
// 	c.makeSound();
	
	
	
	
// 	std::cout << "\nEnd of main (all destructors comes now)\n" << std::endl;
// 	return (0);
// }

int main()
{
    std::cout << "\n\n#################### SUBJECT TEST #######################\n\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;


    std::cout << "\n\n#################### WRONG ANIMAL TEST #######################\n\n" << std::endl;
    const WrongAnimal* basecat = new WrongCat();
    WrongCat cat;

    std::cout << "\nnext sound from declared like this :  const WrongAnimal* basecat = new WrongCat();" << std::endl;
    basecat->makeSound();
    std::cout << "\nnext sound from declared like this :  Cat cat;" << std::endl;
    cat.makeSound();
    delete basecat;
    return 0;
}