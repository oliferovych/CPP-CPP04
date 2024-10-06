/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:27:39 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 13:29:22 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "Amateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*inventory[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource	&operator=(MateriaSource const &src);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif
