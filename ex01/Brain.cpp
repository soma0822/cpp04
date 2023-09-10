/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:40:14 by soma              #+#    #+#             */
/*   Updated: 2023/09/10 11:49:13 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_ideas = new std::string[100];
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
	delete [] this->_ideas;
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		this->_ideas = new std::string[100];
	}
	return (*this);
}

void		Brain::outPutIdea(void) const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] == "")
			break ;
		std::cout << this->_ideas[i] << std::endl;
	}
}

void		Brain::setIdea(std::string idea)
{
	int i = 0;
	
	while ( i < 100)
	{
		if (this->_ideas[i] == "")
		{
			this->_ideas[i] = idea;
			break ;
		}
		i++;
	}
	
	this->_ideas[i] = idea;
	return ;
}