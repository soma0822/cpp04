/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:50:12 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 16:59:24 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat :public Animal
{
	
	public:
		Cat(void);
		Cat(Cat const & rhs);
		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void    makeSound(void) const;
		std::string     getType(void) const;
		void			outPutIdea(void) const;
		void			setIdea(std::string idea);

	protected:
		std::string     _type;
		Brain			*_brain;

};

#endif