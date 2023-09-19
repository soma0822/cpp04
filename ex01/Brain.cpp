/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:40:14 by soma              #+#    #+#             */
/*   Updated: 2023/09/19 21:04:44 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & rhs)
{
	*this = rhs;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i =0; rhs._ideas[i] != ""; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
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
	
	while (i < 100)
	{
		if (this->_ideas[i] == "")
		{
			this->_ideas[i] = idea;
			break ;
		}
		i++;
	}
}