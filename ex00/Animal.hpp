/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:37:32 by soma              #+#    #+#             */
/*   Updated: 2023/09/07 21:58:00 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & rhs);
		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);

		virtual void    makeSound(void) const;
		std::string     getType(void) const;

	protected:
		std::string     _type;

};

#endif