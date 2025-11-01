/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:27:55 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 11:42:12 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat( const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &other)
		Animal::operator=(other); //if no bracket, compiler would search operator=other as a member & varible. with bracket it seach operator= as a member & function then run other parameter
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Nyiao Nyiao. wo shi yi zhi mao la" << std::endl;
}