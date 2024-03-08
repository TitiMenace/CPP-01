/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:13:12 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/08 18:25:59 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string nombre){
	
	this->name = nombre;
	std::cout << this->name << ": has been created" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	
	std::cout << this->name << ": has returned to the grave" << std::endl;
}
void	Zombie::announce(void){

	std::cout << this->name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;

}
