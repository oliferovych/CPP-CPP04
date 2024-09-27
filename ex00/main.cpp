/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:17:07 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/27 17:05:20 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wi->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	wi->makeSound();
	meta->makeSound(); //trying to call a virtual function from a non-instantiated class
	wrongMeta->makeSound(); //trying to call a virtual function from a non-instantiated class
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wi;
	return (0);
}
