/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:01:22 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 18:36:09 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{

}

Ice::~Ice()
{
	
}

Ice::Ice(const Ice &copy)
	: AMateria(copy)
{

}

Ice&	Ice::operator=(const Ice &copy)
{
	if (this != &copy)
		type = copy.type;
	return (*this);
}

Ice*	Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}