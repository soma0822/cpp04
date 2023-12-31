/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:49:43 by soma              #+#    #+#             */
/*   Updated: 2023/09/10 11:08:13 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & rhs) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void    Cat::makeSound(void) const {
	std::cout << RED << "Meow" << RESET << std::endl;
	return ;
}

std::string     Cat::getType(void) const {
	return (this->_type);
}