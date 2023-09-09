/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:38 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 15:43:35 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	
	public:
		Dog(void);
		Dog(Dog const & rhs);
		virtual ~Dog(void);

		Dog & operator=(Dog const & rhs);

		virtual void    makeSound(void) const;
		std::string     getType(void) const;
		void			outPutIdea(void) const;
		void			setIdea(std::string idea);

	private:
		std::string     _type;
		Brain			*_brain;

};

#endif