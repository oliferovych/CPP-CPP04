/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:53:16 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 13:35:16 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::~AMateria()
{
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
