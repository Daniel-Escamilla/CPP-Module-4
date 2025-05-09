/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:56 by descamil          #+#    #+#             */
/*   Updated: 2025/05/09 17:43:14 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	Animal* animals[15];

	for (int i = 0; i < 5; ++i)
		animals[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		animals[i] = new Cat();
	for (int i = 10; i < 15; i++)
		animals[i] = new Animal();
	for (int i = 0; i < 15; ++i)
		animals[i]->makeSound();
	for (int i = 0; i < 15; ++i)
		delete (animals[i]);
	return (0);
}
