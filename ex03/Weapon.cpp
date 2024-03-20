
#include "Weapon.hpp"

Weapon::Weapon(std::string type_assigned){
	
	std::cout << "Weapon Constructor called" << std::endl;
	this->type = type_assigned;
	return;
}

Weapon::~Weapon(void){
	
	std::cout << "Weapon Destructor called" << std::endl;
	return ;
}

std::string	&Weapon::getType(void){

	std::string	&ref_type = this->type;
	return (ref_type);
}

void	Weapon::setType(std::string type_assigned){

	this->type = type_assigned;
	return;
}
