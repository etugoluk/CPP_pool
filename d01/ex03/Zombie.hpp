#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string type;
	std::string name;
public:
	Zombie();
	Zombie(std::string type, std::string name);
	~Zombie();
	void announce();
};

#endif