/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:37 by descamil          #+#    #+#             */
/*   Updated: 2025/05/02 20:55:06 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

#include "include.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif
