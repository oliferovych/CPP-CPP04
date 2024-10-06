/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:39:44 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 14:10:14 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	MateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bobby = new Character("bobby");

	me->use(0, *bobby);
	me->use(1, *bobby);

	AMateria *slot0 = me->get_inventory(0);
	AMateria *slot1 = me->get_inventory(1);

	me->unequip(0);
	me->unequip(1);

	me->use(0, *bobby);
	me->use(1, *bobby);

	delete bobby;
	delete me;
	delete src;
	delete slot0;
	delete slot1;
	return (0);
}
