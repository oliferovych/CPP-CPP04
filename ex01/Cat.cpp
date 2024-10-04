/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:16:58 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/04 14:28:36 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	type = "Cat";
	brain->ideas[0] = "I am a cat";
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*(other.brain)))
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		if (this->brain)
			*(this->brain) = *(other.brain);
		else
			this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

std::string Cat::get_idea(int i)
{
	return (brain->ideas[i]);
}

void Cat::set_idea(std::string idea, int i)
{
	brain->ideas[i] = idea;
}
