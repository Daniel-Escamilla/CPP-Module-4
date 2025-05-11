/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:01:09 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 19:00:33 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string			type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);
		
		AMateria(std::string const & type);

		std::string const	&getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
		
};

#endif
