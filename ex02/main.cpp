/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:17:07 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/04 15:36:32 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "Test1: Creating Jack and Bob:\n" << std::endl;
	Animal* Jack = new Dog();
	Animal* Bob = new Cat();

	std::cout << "Jack is a " << Jack->getType() << std::endl;
	std::cout << "Bob is a " << Bob->getType() << std::endl;
	delete Jack;
	delete Bob;
	std::cout << "\nTest2: Creating 3 cats and 3 dogs:\n" << std::endl;
	Animal *animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 6; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	std::cout << "\nTest3: Creating a copy of a dog with the same brain\n" << std::endl;
	Dog *dog = new Dog();
	std::cout << "Dog's idea0: " << dog->get_idea(0) << std::endl;
	dog->set_idea("I like to bark", 1);
	std::cout << "Dog's idea1: " << dog->get_idea(1) << std::endl;
	dog->set_idea("I like to eat", 2);
	std::cout << "Dog's idea2: " << dog->get_idea(2) << std::endl;
	Dog *dog2 = new Dog(*dog);
	std::cout << "Dog2's idea0: " << dog2->get_idea(0) << std::endl;
	std::cout << "Dog2's idea1: " << dog2->get_idea(1) << std::endl;
	std::cout << "Dog2's idea2: " << dog2->get_idea(2) << std::endl;
	delete dog;
	delete dog2;
	return (0);
}
