/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongmain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:21:45 by sinagaki          #+#    #+#             */
/*   Updated: 2023/09/14 20:30:32 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	try
	{
		WrongAnimal		*Wrongcat = new WrongCat();
		WrongAnimal		*Wronganimal = new WrongAnimal();

		std::cout << Wrongcat->getType() << " " << std::endl;
		std::cout << Wronganimal->getType() << " " << std::endl;

		Wrongcat->makeSound();
		Wronganimal->makeSound();
		delete Wrongcat;
		delete Wronganimal;
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
}