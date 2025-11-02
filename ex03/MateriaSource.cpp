/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 07:58:27 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 08:40:41 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < TEMPLATE_SIZE; i++)
		templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	copyTemplates(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		clearTemplates();
		copyTemplates(other);
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	clearTemplates();
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for(int i = 0; i < TEMPLATE_SIZE; i++)
	{
		if (!templates[i])
		{
			templates[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for(int i = 0; i < TEMPLATE_SIZE; i++)
	{
		if (templates[i] &&  templates[i]->getType() == type)
			return templates[i]->clone();
	}
	return (NULL);
}

void	MateriaSource::clearTemplates()
{
	for (int i = 0; i < TEMPLATE_SIZE; i++)
	{
		if (templates[i])
		{
			delete templates[i];
			templates[i] = NULL;
		}
	}
}

void	MateriaSource::copyTemplates(const MateriaSource& other)
{
	for (int i = 0; i < TEMPLATE_SIZE; i++)
	{
		templates[i] = NULL;
		if(other.templates[i])
			templates[i] = other.templates[i]->clone();
	}
}
