/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:56 by descamil          #+#    #+#             */
/*   Updated: 2025/05/09 17:49:51 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	AAnimal* AAnimals[10];

	for (int i = 0; i < 5; ++i)
		AAnimals[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		AAnimals[i] = new Cat();
	for (int i = 0; i < 10; ++i)
		AAnimals[i]->makeSound();
	for (int i = 0; i < 10; ++i)
		delete (AAnimals[i]);
	return (0);
}
