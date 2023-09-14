/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:28:54 by soma              #+#    #+#             */
/*   Updated: 2023/09/14 20:45:36 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	try
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
	catch (const std::bad_alloc& e)
	{
        std::cerr << "メモリの割り当てに失敗しました: " << e.what() << std::endl;
    }
}
// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }