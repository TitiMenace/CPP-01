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

	std::string	index[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int x = 0; x < 4; x++){
		if (level.compare(index[x]) == 0){
			switch (x + 1){
				case 1:
					Harl::debug();
					// fallthrough
				case 2:
					Harl::info();
					// fallthrough
				case 3:
					Harl::warning();
					// fallthrough
				case 4: {
					Harl::error();
					break ;
				}
				default: {
					std::cout << "BZZ Invalid level !" << std::endl;
					break ;
				}
			}
		}
	}
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
