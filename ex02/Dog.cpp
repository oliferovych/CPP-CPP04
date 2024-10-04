/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:17:02 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/04 15:34:16 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	brain->ideas[0] = "I am a dog";
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->brain = new Brain(*(other.brain));
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (this->brain)
			*(this->brain) = *(other.brain);
		else
			this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Bark" << std::endl;
}

std::string Dog::get_idea(int i)
{
	return (brain->ideas[i]);
}

void Dog::set_idea(std::string idea, int i)
{
	brain->ideas[i] = idea;
}
