/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:49:00 by descamil          #+#    #+#             */
/*   Updated: 2025/05/11 17:59:55 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	inventory[4];
		std::string	type;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &copy);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};