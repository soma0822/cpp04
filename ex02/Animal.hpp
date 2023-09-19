/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:37:32 by soma              #+#    #+#             */
/*   Updated: 2023/09/19 21:06:56 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"

class Animal
{
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & rhs);
		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);

		virtual void    makeSound(void) const = 0;
		virtual void	setIdea(std::string idea);
		virtual void	outPutIdea(void) const;
		virtual std::string     getType(void) const;

	protected:
		std::string     _type;

};

#endif