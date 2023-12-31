/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:35 by soma              #+#    #+#             */
/*   Updated: 2023/09/10 11:09:08 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & rhs) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void    Dog::makeSound(void) const {
	std::cout << GREEN << "Woof" << RESET << std::endl;
	return ;
}

std::string     Dog::getType(void) const {
	return (this->_type);
}