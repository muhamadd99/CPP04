/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:55:39 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 08:53:39 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria* inventory[4];
	static const int INVENTORY_SIZE = 4;
public:
	Character(const std::string& name);
	Character(const Character& other);
	Character& operator=(Character const & other);
	virtual ~Character();
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
private:
	void clearInventory();
	void copyInventory(Character const & other);
};