/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:37:32 by soma              #+#    #+#             */
/*   Updated: 2023/09/10 11:07:50 by sinagaki         ###   ########.fr       */
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

		virtual void    makeSound(void) const;
		virtual std::string     getType(void) const;

	protected:
		std::string     _type;

};

#endif