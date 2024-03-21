#include "includes.hpp"

int	main(int ac, char **av){

	std::string	line;
	std::size_t	found;
	if (ac != 4){
		std::cout << "Program requires 3 arguments !" << std::endl;
		return (1);
	}
	std::string	ofname = av[1];
	if (ofname == ""){
		std::cout << "Filename can't be empty !" << std::endl;
		return (1);
	}
	std::string	buffer;
	std::string	to_find = av[2];
	std::string	to_add = av[3];
	std::ifstream	ifile(av[1]);
	if (ifile.is_open()){
		ofname.append(".replace");
		std::ofstream	ofile(ofname.c_str());
		if (!ofile.is_open()){
			std::cout << "Could not open Outfile" << std::endl;
			ifile.close();
			return (1);
		}
		while (getline(ifile, line))
			buffer = buffer + line + "\n";
		found = buffer.find(to_find);
		while (found != std::string::npos){
			buffer = buffer.substr(0, found) + to_add + buffer.substr(found + to_find.length()); 
			found = buffer.find(to_find, found + to_add.length());
		}
		ofile << buffer;
		ofile.close();
	}
	else {
		std::cout << "Could not open Infile" << std::endl;
		return (1);
	}
	ifile.close();
	return (0);
}

