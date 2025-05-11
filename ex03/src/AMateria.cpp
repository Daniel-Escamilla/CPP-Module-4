/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:01:12 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 18:36:28 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(const AMateria &copy)
	: type(copy.type)
{
	
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
		type = copy.type;
	return (*this);
}

AMateria::AMateria(std::string const & type)
	: type(type)
{
	
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Using " << this->getType() << " on " << target.getName() << std::endl;
}