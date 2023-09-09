/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:28:54 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 20:06:57 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Dog		*dog1 = new Dog();
	Dog		*dog2 = new Dog(*dog1);
	Dog		*dog3 = new Dog();
	Cat		*cat1 = new Cat();
	Cat		*cat2 = new Cat(*cat1);
	Cat		*cat3 = new Cat();
	*dog3 = *dog1;
	*cat3 = *cat1;
	Animal *animals[6] = {dog1, dog2, dog3, cat1, cat2, cat3};
	// Animal *tmp = new Animal();
	
	animals[0]->setIdea("I am a dog1");
	animals[1]->setIdea("I am a dog2");
	animals[2]->setIdea("I am a dog3");
	std::cout << RED;
	animals[0]->outPutIdea();
	animals[1]->outPutIdea();
	animals[2]->outPutIdea();

	std::cout << GREEN;
	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();

	std::cout << YELLOW;
	animals[3]->makeSound();
	animals[4]->makeSound();
	animals[5]->makeSound();
	
	std::cout << RESET;
	
	for (int i = 0; i < 6; i++)
		delete animals[i];
}