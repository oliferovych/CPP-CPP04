/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:37:04 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:37:35 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
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
}

void WrongCat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}
