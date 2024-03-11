/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:29:52 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/08 18:23:11 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>


class Zombie{

	public:

		Zombie(void);
		~Zombie(void);

		void	announce(int numero);
		void	setName(std::string name);
	private:
		
		std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
