/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:16:52 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:04:14 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
}

Animal::Animal(const Animal &other) : type(other.type)
{
}

Animal &Animal::operator=(const Animal &other)
{
	if(this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
}

void Animal::makeSound() const
{
	std::cout << "It should be overriden by derived classes. And make a specific sound." << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return type;
}
