/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:01:02 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 18:36:52 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{
	
}

Cure::~Cure()
{
	
}

Cure::Cure(const Cure &copy)
	: AMateria(copy)
{
	
}
Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
		type = copy.type;
	return (*this);
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}