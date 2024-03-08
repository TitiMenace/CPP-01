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

int	main(void){

	Zombie	*zombie;

	zombie = newZombie("Bob");	
	zombie->announce();
	randomChump("Jacques");
	delete(zombie);
	return (0);
}
