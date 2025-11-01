/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 11:42:33 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 18:15:32 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound (void) const
{
	std::cout << "Woof Woof. wo shi yi zhi gou" << std::endl;
}