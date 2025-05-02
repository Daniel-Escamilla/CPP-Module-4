/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:46 by descamil          #+#    #+#             */
/*   Updated: 2025/05/02 20:56:06 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() { std::cout << "Animal created" << std::endl; }

Animal::~Animal() {	std::cout << "Animal destroyed" << std::endl; }

void	Animal::makeSound() const
{
	std::cout << "AAHHHHHH" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
