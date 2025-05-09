/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:46 by descamil          #+#    #+#             */
/*   Updated: 2025/05/09 17:44:46 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}
AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	if (this != &copy)
		type = copy.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (type);
}
