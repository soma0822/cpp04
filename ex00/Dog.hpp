/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:38 by soma              #+#    #+#             */
/*   Updated: 2023/09/10 14:14:03 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	
	public:
		Dog(void);
		Dog(Dog const & rhs);
		virtual ~Dog(void);

		Dog & operator=(Dog const & rhs);

		virtual void    makeSound(void) const;
		std::string     getType(void) const;

	private:
};

#endif