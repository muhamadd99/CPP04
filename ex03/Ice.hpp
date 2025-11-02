/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:28:02 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 23:52:00 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const & other);	
	Ice& operator=(Ice const & other);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};