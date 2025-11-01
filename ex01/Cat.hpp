/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:28:07 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:08:45 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat( const Cat& other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();
	virtual void makeSound() const;
	Brain* getBrain();
	const Brain* getBrain() const;
};