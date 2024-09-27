/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:16:52 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:39:31 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
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
	std::cout << "Animal destructor called." << std::endl;
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
