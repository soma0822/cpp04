/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:39:42 by soma              #+#    #+#             */
/*   Updated: 2023/09/14 20:40:24 by sinagaki         ###   ########.fr       */
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
		std::string		_ideas[100];

};

#endif