/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:40:50 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 14:02:06 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	if(this != &src)
	{
		for(int i = 0; i < 4; i++)
			inventory[i] = src.inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	if(this != &src)
	{
		for(int i = 0; i < 4; i++)
		{
			if(inventory[i])
				delete inventory[i];
			inventory[i] = src.inventory[i];
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(inventory[i])
			delete inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if(!m)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if(!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if(inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	std::cout << "Materia " << type << " not found" << std::endl;
	return (NULL);
}

