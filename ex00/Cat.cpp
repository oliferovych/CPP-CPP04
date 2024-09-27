/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:16:58 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:40:04 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
