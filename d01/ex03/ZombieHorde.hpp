#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	Zombie *horde;
	int		n;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
};

#endif