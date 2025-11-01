/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:41:26 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 20:11:25 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << "ideas#" << i;
		ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i= 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy Assignment Operator Overload" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
	else
		std::cout << "Wrong Index" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index >=0 && index < 100)
		return (ideas[index]);		
	else
		std::cout  << "Wrong Index" << std::endl;
	return ("");
}
