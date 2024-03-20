
#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA{

	public:

		HumanA(std::string assigned_name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

	private:

		std::string	name;
		Weapon	&weapon;

};

#endif
