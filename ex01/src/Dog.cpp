/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:55:25 by descamil          #+#    #+#             */
/*   Updated: 2025/05/09 17:17:09 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &copy)
	: Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	type = copy.type;
	brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		*brain = *copy.brain; 
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}
