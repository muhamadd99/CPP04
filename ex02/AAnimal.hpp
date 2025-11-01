/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:25:37 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:23:56 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma  once
#include <string>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal();
	AAnimal( const AAnimal& other);
	AAnimal& operator=( const AAnimal& other);
	virtual ~AAnimal();
	
	virtual void makeSound( void ) const = 0;
	std::string getType( void ) const;
};