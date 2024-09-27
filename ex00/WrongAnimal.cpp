/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:15:02 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:40:45 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
	{
		type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "It should be overriden by derived classes and make a specific sound, but it isn't 0.0" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
