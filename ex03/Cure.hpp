/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:52:45 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 07:27:39 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};