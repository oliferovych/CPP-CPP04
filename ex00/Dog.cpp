/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:17:02 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:40:23 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
