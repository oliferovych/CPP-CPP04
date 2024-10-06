/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:39:44 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 14:39:39 by dolifero         ###   ########.fr       */
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

	Character	*me = new Character("me");

	AMateria	*slot0;
	AMateria	*slot1;
	slot0 = src->createMateria("cure");
	slot1 = src->createMateria("ice");
	me->equip(slot0);
	me->equip(slot1);

	ICharacter *bobby = new Character("bobby");

	me->use(0, *bobby);
	me->use(1, *bobby);

	Character *evilme = new Character(*me);

	MateriaSource *src2 = new MateriaSource();
	*src2 = *src;

	me->unequip(0);
	me->unequip(1);

	evilme->use(1, *bobby);
	me->use(1, *bobby);

	delete bobby;
	delete me;
	delete evilme;
	delete src;
	delete src2;
	delete slot0;
	delete slot1;
	return (0);
}
