/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:37:04 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:41:19 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if(this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}
