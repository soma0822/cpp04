/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:13:28 by sinagaki          #+#    #+#             */
/*   Updated: 2023/09/10 11:24:58 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & rhs) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void    WrongCat::makeSound(void) const {
	std::cout << RED << "Meow" << RESET << std::endl;
	return ;
}

std::string     WrongCat::getType(void) const {
	return (this->_type);
}