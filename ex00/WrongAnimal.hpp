/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:13:26 by sinagaki          #+#    #+#             */
/*   Updated: 2023/09/10 11:32:19 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"

class WrongAnimal
{
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & rhs);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void    makeSound(void) const;
		std::string     getType(void) const;

	protected:
		std::string     _type;

};

#endif