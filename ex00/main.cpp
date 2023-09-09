/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:28:54 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 20:12:59 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal		*dog = new Dog();
	Animal		*cat = new Cat();
	Animal		*animal = new Animal();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << animal->getType() << " " << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	delete dog;
	delete cat;
	delete animal;
}