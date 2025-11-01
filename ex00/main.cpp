/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:15:01 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:06:53 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
 	std::cout << i->getType() << " " << std::endl;
 	i->makeSound(); //will output the cat sound!
 	j->makeSound();
 	meta->makeSound();
	
	const WrongAnimal* WrongAnimal1 = new WrongAnimal();
	const WrongAnimal* WrongCat1 = new WrongCat();

	std::cout << "\n=== TESTING TYPES ===" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << WrongAnimal1->getType() << " " << std::endl;
	std::cout << WrongCat1->getType() << " " << std::endl; //showing that attributes are taken, but not function.

	std::cout << "\n=== TESTING POLYMORPHISM ===" << std::endl;
	std::cout << "Animal say: ";
	meta->makeSound();
	std::cout << "Cat say: ";
	j->makeSound();
	std::cout << "Dog say: ";
	i->makeSound();

	std::cout << "\n=== TESTING WRONG POLYMORPHISM ===" << std::endl;
	std::cout << "Cat say: ";
	i->makeSound();
	std::cout << "Wrongcat say: ";
	WrongCat1->makeSound();
	
	std::cout << "\n=== CLEANUP ===" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete WrongCat1;
	delete WrongAnimal1;

	    std::cout << "\n=== ADDITIONAL TESTS ===" << std::endl;
    
    // Test direct object creation
    std::cout << "\n--- Direct objects ---" << std::endl;
    Dog dog;
    Cat cat;
    std::cout << "Direct dog: ";
    dog.makeSound();
    std::cout << "Direct cat: ";
    cat.makeSound();
    
    // Test copy constructor
    std::cout << "\n--- Copy constructor ---" << std::endl;
    Dog originalDog;
    Dog copiedDog(originalDog);
    std::cout << "Copied dog: ";
    copiedDog.makeSound();
    
    
    std::cout << "\n=== PROGRAM END ===" << std::endl;
    return 0;
}