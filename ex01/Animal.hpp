/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:25:37 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 15:17:35 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma  once
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal( const Animal& other);
	Animal& operator=( const Animal& other);
	virtual ~Animal();
	virtual void makeSound( void ) const;
	std::string getType( void ) const;
};