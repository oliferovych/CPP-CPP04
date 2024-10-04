/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:42:57 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/04 13:52:07 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if(this != &other)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}
