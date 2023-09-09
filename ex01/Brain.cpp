/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:40:14 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 15:44:58 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_idea = new std::string[100];
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & rhs)
{
	*this = rhs;
	return ;
}

Brain::~Brain(void)
{
	delete [] this->_idea;
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		this->_idea = new std::string[100];
	}
	return (*this);
}

void		Brain::outPutIdea(void) const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_idea[i] == "")
			break ;
		std::cout << this->_idea[i] << std::endl;
	}
}

void		Brain::setIdea(std::string idea)
{
	int i = 0;
	
	while ( i < 100)
	{
		if (this->_idea[i] == "")
		{
			this->_idea[i] = idea;
			break ;
		}
		i++;
	}
	
	this->_idea[i] = idea;
	return ;
}