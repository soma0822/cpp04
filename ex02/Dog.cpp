/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:35 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 15:47:59 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & rhs) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = rhs.getType();
	this->_brain = new Brain();
	return ;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_brain = new Brain();
	}
	return (*this);
}

void    Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
	return ;
}

std::string     Dog::getType(void) const {
	return (this->_type);
}

void	Dog::outPutIdea(void) const {
	this->_brain->outPutIdea();
	return ;
}

void	Dog::setIdea(std::string idea) {
	this->_brain->setIdea(idea);
	return ;
}