/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:53:16 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 14:36:06 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria " << type << " is created" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria " << type << " vanished" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	if(this != &other)
		*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if(this != &other)
		*this = other;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
