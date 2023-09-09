/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:39:42 by soma              #+#    #+#             */
/*   Updated: 2023/09/09 15:43:43 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & rhs);
		virtual ~Brain(void);

		Brain & operator=(Brain const & rhs);

		void		outPutIdea(void) const;
		void		setIdea(std::string idea);

	private:
		std::string		*_idea;

};

#endif