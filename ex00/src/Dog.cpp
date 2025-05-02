/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:55:25 by descamil          #+#    #+#             */
/*   Updated: 2025/05/02 20:55:59 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog() { std::cout << "Dog destroyed" << std::endl; }

void	Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}
