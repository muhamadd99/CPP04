/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:28:07 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/10 18:57:40 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat( const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound() const;
};
// //dont need to declare virtual in derived class since base class declared
// virtual ~Cat();
// virtual void makeSound() const;