
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	horde = new Zombie[N];
	n = N;
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->n; i++)
	{
		this->horde[i].announce();
	}
}