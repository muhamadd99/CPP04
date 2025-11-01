/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:15:01 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:35:19 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
 	delete i;
	
	// // This will now cause COMPILE ERROR (good!):
    // Animal animal_ex02;  // ERROR: cannot instantiate abstract class
	
	std::cout << "=== CREATING ARRAY ===" << std::endl;
	const int ARRAY_SIZE = 4;
	Animal* animals[ARRAY_SIZE];
	
	for (int k = 0; k < ARRAY_SIZE/2; k++)
	{
		std::cout << "Creating Dog #" << k + 1 << std::endl;
		animals[k] = new Dog();
	}
	for (int k = ARRAY_SIZE/2; k < ARRAY_SIZE; k++)
	{
		std::cout << "Creating Cat #" << k + 1 << std::endl;
		animals[k] = new Cat();
	}
	std::cout << "\n=== TESTING ANIMAL SOUNDS ===" << std::endl;
	for (int k = 0; k < ARRAY_SIZE; k++)
	{
		std::cout << "Animal " << k + 1 << " (" << animals[k]->getType() << "): ";
		animals[k]->makeSound();
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
	for (int k = 0; k < ARRAY_SIZE; k++)
	{
		std::cout << "Deleting Animal " << k + 1 << std::endl;
		delete animals[k];
	}
	std::cout << "\nDeleting test dogs..." << std::endl;
    delete dog1;
    delete dog2;

	return (0);
}