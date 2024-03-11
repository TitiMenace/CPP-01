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

Zombie::Zombie(void){
	
//	this->name = nombre;
//	std::cout << this->name << ": has been created" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	
	std::cout << this->name << ": has returned to the grave" << std::endl;
}
void	Zombie::announce(int numero){

	std::cout << this->name << numero << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;

}

void	Zombie::setName(std::string name){

	this->name = name;
	return;
}
