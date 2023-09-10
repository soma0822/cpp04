/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:13:30 by sinagaki          #+#    #+#             */
/*   Updated: 2023/09/10 11:25:26 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal
{
	
	public:
		WrongCat(void);
		WrongCat(WrongCat const & rhs);
		~WrongCat(void);

		WrongCat & operator=(WrongCat const & rhs);

		void    makeSound(void) const;
		std::string     getType(void) const;

	protected:
		std::string     _type;

};

#endif