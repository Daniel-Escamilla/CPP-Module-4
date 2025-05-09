/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:54:27 by descamil          #+#    #+#             */
/*   Updated: 2025/05/09 17:47:55 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		void	makeSound() const;
};

#endif
