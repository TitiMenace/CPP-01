#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){

	std::cout << "Human A Constructor called" << std::endl;
	return;
}

HumanA::~HumanA(void){
	std::cout << "Human A Destructor called" << std::endl;
	return;
}

void	HumanA::attack(void){
	
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}
