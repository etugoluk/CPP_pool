#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	Zombie *horde;
	int		n;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
};

#endif