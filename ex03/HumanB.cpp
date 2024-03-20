#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name){

	std::cout << "Human A Constructor called" << std::endl;
	this->weapon = NULL;
	this->name = name;
	return;
}

HumanB::~HumanB(void){
	std::cout << "Human A Destructor called" << std::endl;
	return;
}

void	HumanB::attack(void){

	if (!this->weapon){
		std::cout << this->name << " attacks with their bare hands" << std::endl;
		return ;
	}
	else {
		std::cout << this->name << " attacks with their ";
		std::cout << this->weapon->getType() << std::endl;
		return ;
	}
}

void	HumanB::setWeapon(Weapon &weapon){
	
	this->weapon = &weapon;
	std::cout << "Weapon set !" << std::endl;
	return;
}
