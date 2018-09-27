#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->z_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* z = new Zombie(this->z_type, name);
	return (z);
}

void ZombieEvent::randomChump()
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	srand(time(NULL));
	int length = rand() % 30 + 1;
	std::string name = std::string(length, '\0');
	for (int i = 0; i < length; i++)
		name[i] = alphabet[rand() % 26];
	name[0] -= 32; 
	Zombie z = Zombie(this->z_type, name);
	z.announce();
}
