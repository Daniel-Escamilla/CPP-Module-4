/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 10:58:04 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 13:40:52 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{	
	public:
		Ice();
		~Ice();
		Ice(const Ice &copy);
		Ice&	operator=(const Ice &copy);

		Ice*	clone() const;
		void	use(ICharacter &target);
};

#endif