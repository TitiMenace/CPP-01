

#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB{

	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &Weapon);

	private:

		std::string	name;
		Weapon	*weapon;

};

#endif
