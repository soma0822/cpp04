/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:37:37 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 18:16:08 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & rhs) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
	return ;
}

std::string     Animal::getType(void) const{
	return (this->_type);
}