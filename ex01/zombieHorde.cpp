









#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){

	Zombie*	zombie = new Zombie[N];
	for (int x = 0; x < N; x++)
		zombie[x].setName(name);
	return (zombie);
}
