/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 07:25:37 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/01 22:08:59 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma  once
#include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal( const WrongAnimal& other);
	WrongAnimal& operator=( const WrongAnimal& other);
	~WrongAnimal();
	void makeSound( void ) const;
	std::string getType( void ) const;
};