/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:35 by soma              #+#    #+#             */
/*   Updated: 2023/09/14 20:39:18 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
	return ;
}

Dog::Dog(Dog const & rhs) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = rhs.getType();
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
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
		delete this->_brain;
		try
		{
			this->_brain = new Brain();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			exit(1);
		}
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