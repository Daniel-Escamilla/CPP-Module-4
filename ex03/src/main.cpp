/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:01:29 by descamil          #+#    #+#             */
/*   Updated: 2025/09/01 10:55:41 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int main()	
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* src1 = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src1->learnMateria(new Ice());
	
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src1->createMateria("ice");
	bob->equip(tmp);

	tmp = me->getMateria(0);
	me->unequip(0);
	delete (tmp);
	tmp = src->createMateria("cureice");
	me->equip(tmp);


	bob->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *me);
	me->use(3, *bob);

	delete bob;
	delete me;
	delete src;
	delete src1;

	return (0);
}

