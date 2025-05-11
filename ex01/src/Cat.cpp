/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:56:12 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 11:27:37 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &copy)
	: Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = copy.type;
	brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		*brain = *copy.brain; 
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}
