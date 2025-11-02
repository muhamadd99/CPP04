/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 07:31:38 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 13:38:24 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& other) : name(other.name)
{
	copyInventory(other);
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		clearInventory();
		copyInventory(other);
	}
	return (*this);
}

Character::~Character()
{
	clearInventory();	
}

const std::string& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if(!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE || !inventory[idx])
		return ;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY_SIZE || !inventory[idx])
		return ;
	inventory[idx]->use(target);
}

void Character::clearInventory()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		delete inventory[i];
		inventory[i] = NULL;
	}
}

void Character::copyInventory(const Character& other)
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		inventory[i] = NULL;
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
	}
}