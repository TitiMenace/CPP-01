#include "Harl.hpp"

int	main(int ac, char **av){

	Harl	harl;
	
	if (ac != 2){
		std::cout << "Only Level argument is required and accepted" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
