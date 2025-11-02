/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 08:22:02 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 13:24:41 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	std::cout << "=== TEST 1: BASIC FUNCTIONALITY ===" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure2");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	std::cout << "\n=== TEST2: COPY AND ASSIGNMENT ===" << std::endl;
	{
		Character original("Alice");
		original.equip(new Ice());
		original.equip(new Cure());

		Character copy(original);
		copy.use(0, original);
		copy.use(1, original);

		Character assigned("Bob");
		assigned = original;
		assigned.use(0, original);
		assigned.use(1, original);
	}
	
	std::cout << "\n=== TEST3: INVENTORY LIMITS ===" << std::endl;
	{
		Character ch("Test");
		for (int i = 0; i < 5; i++)
			ch.equip(new Ice);

		ICharacter* target = new Character("Target");
		for (int i = 0; i < 4; i++)
			ch.use(i, *target);
		delete target;
	}
	
	std::cout << "\n=== Test4: Unknown Materia Type ===" << std::endl;
	{
		MateriaSource src;
		src.learnMateria(new Ice());
		AMateria* unknown = src.createMateria("fire");
		if(!unknown)
			std::cout << "Unknown materia type correctly returns NULL" << std::endl;
	}
	return (0);
}