/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:15:01 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:36:13 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	// This will now cause COMPILE ERROR (good!):
    // AAnimal animal;  // ERROR: cannot instantiate abstract class
	
	std::cout << "=== CREATING ARRAY ===" << std::endl;
	const int ARRAY_SIZE = 4;
	AAnimal* animals[ARRAY_SIZE];
	
	for (int i = 0; i < ARRAY_SIZE/2; i++)
	{
		std::cout << "Creating Dog #" << i + 1 << std::endl;
		animals[i] = new Dog();
	}
	for (int i = ARRAY_SIZE/2; i < ARRAY_SIZE; i++)
	{
		std::cout << "Creating Cat #" << i + 1 << std::endl;
		animals[i] = new Cat();
	}
	std::cout << "\n=== TESTING ANIMAL SOUNDS ===" << std::endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Animal " << i + 1 << " (" << animals[i]->getType() << "): ";
		animals[i]->makeSound();
	}
	std::cout << "\n=== TESTING DEEP COPIES ===" << std::endl;
	Dog* dog1 = new Dog();
	dog1->getBrain()->setIdea(0, "Original Dog: Wo xihuan ni!");
	dog1->getBrain()->setIdea(1, "Weishenme ni bu xihuan wo");

	Dog* dog2 = new Dog(*dog1);
	dog2->getBrain()->setIdea(0, "Wo bu xihuan ni");
	
	std::cout << "Dog1 idea 0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea 0: " << dog2->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog1 idea 1: " << dog1->getBrain()->getIdea(1) << std::endl;
    std::cout << "Dog2 idea 1: " << dog2->getBrain()->getIdea(1) << std::endl;

	std::cout << "=== DELETING ARRAY OF ANIMALS===" << std::endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Deleting Animal " << i + 1 << std::endl;
		delete animals[i];
	}
	std::cout << "\nDeleting test dogs..." << std::endl;
    delete dog1;
    delete dog2;

	return (0);
}