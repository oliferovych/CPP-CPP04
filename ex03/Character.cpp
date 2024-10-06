/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:13:01 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 14:31:23 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character " << name << " is born" << std::endl;
}

Character::Character(const Character &other)
{
	if(this != &other)
	{
		name = other.name;
		for(int i = 0; i < 4; i++)
		{
			if(other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
}

Character	&Character::operator=(const Character &other)
{
	if(this != &other)
	{
		name = other.name;
		for(int i = 0; i < 4; i++)
		{
			if(inventory[i])
				delete inventory[i];
			if(other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(inventory[i])
			delete inventory[i];
	}
}

const std::string &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	while(i < 4)
	{
		if(!inventory[i])
		{
			inventory[i] = m;
			break;
		}
		i++;
	}
	std::cout << "Character " << name << " equips " << m->getType() << " in slot " << i << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if(idx < 0 || idx >= 4 || !inventory[idx])
		return ;
	inventory[idx]->use(target);
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx >= 4 || !inventory[idx])
		return ;
	inventory[idx] = NULL;
	std::cout << "Character " << name << " unequips slot " << idx << std::endl;
}

AMateria *Character::get_inventory(int idx)
{
	if(idx < 0 || idx >= 4)
		return (NULL);
	return (inventory[idx]);
}
