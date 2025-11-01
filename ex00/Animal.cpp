/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:27:15 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 12:46:05 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Unnamed")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal( const Animal& other ) : type(other.type)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=( const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Wo shi yi ge dongwu" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
