
#include <string>
#include <iostream>


int	main(void){

	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of the string variable: " << &str << std::endl;
	std::cout << "Memory address held by the PTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by the REF: " << &stringREF << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed by the PTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by the REF: " << stringREF << std::endl;


	return (1);
}
