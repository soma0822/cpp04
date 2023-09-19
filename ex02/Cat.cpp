/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:49:43 by soma              #+#    #+#             */
/*   Updated: 2023/09/19 21:04:56 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
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

Cat::Cat(Cat const & rhs) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = rhs.getType();
	try
	{
		this->_brain = new Brain();
		*this->_brain = *rhs._brain;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		delete this->_brain;
		try
		{
			this->_brain = new Brain();
			*this->_brain = *rhs._brain;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			exit(1);
		}
	}
	return (*this);
}

void    Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
	return ;
}

std::string     Cat::getType(void) const {
	return (this->_type);
}

void	Cat::outPutIdea(void) const {
	this->_brain->outPutIdea();
	return ;
}

void	Cat::setIdea(std::string idea) {
	this->_brain->setIdea(idea);
	return ;
}