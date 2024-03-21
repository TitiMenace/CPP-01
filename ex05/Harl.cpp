#include "Harl.hpp"

Harl::Harl(void){

	std::cout << "Constructor Called" << std::endl;
	return;
}

Harl::~Harl(void){

	std::cout << "Destructor Called" << std::endl;
	return;
}

void	Harl::complain(std::string level){

	function	tab[] = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	std::string	index[] = {"DEBUG", "INFO", "ERROR", "WARNING"};
	for (int x = 0; x < 4; x++){
		if (level.compare(index[x]) == 0){
			return ((this->*tab[x])());
		}
	}
	std::cout << "Invalid level !" << std::endl;
	return ;
}

void	Harl::debug(void){

	std::cout << "Debug function called" << std::endl;
	return ;
}

void	Harl::info(void){

	std::cout << "Info function called" << std::endl;
	return ;
}

void	Harl::error(void){

	std::cout << "Error function called" << std::endl;
	return ;
}

void	Harl::warning(void){

	std::cout << "Warning function called" << std::endl;
	return ;
}
