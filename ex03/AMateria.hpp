/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:47:35 by dolifero          #+#    #+#             */
/*   Updated: 2024/10/06 14:02:54 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &src);
		AMateria	&operator=(AMateria const &src);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria *clone() const = 0;

		virtual void use(ICharacter	&target);
};

#endif
