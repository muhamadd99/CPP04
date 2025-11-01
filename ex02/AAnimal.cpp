/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:27:15 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:24:58 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("Unnamed")
{
	std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) : type(other.type)
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Wo shi yi ge dongwu" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}
