/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:28:22 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/08 18:25:55 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av){

	if (ac != 3){
		std::cout << "You need 2 parameters: 1:size of Horde 2:name of the zombies";
		return 1;
	}

	int	hordeSize = atoi(av[1]);

	Zombie* horde = zombieHorde(hordeSize, av[2]);
	for (int x = 0; x < hordeSize; x++)
		horde[x].announce(x + 1);
	delete []horde;
	return 0;
}
