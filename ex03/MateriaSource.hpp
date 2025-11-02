/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:03:22 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/02 08:40:32 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria* templates[4];
	static const int TEMPLATE_SIZE = 4;
public:
	MateriaSource();
	MateriaSource(MateriaSource const& other);
	MateriaSource& operator=(MateriaSource const& other);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const& type);
private:
	void clearTemplates();
	void copyTemplates(MateriaSource const& other);
};