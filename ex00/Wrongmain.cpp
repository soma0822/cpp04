/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongmain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:21:45 by sinagaki          #+#    #+#             */
/*   Updated: 2023/09/10 11:40:24 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
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