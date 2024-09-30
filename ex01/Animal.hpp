/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:16:49 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 16:10:29 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal(); //the constructor is virtual in order to be able to delete
			//the object with a pointer of the base class and call the destructor of the object first, and not the base class
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const; //not pure virtual because we can instantiate an Animal object
};

#endif
