/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:50:12 by soma              #+#    #+#             */
/*   Updated: 2023/09/10 14:13:57 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat :public Animal
{
	
	public:
		Cat(void);
		Cat(Cat const & rhs);
		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void    makeSound(void) const;
		std::string     getType(void) const;

	private:
};

#endif