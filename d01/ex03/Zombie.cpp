#include "Zombie.hpp"

Zombie::Zombie()
{
	this->type = "Default";
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int length = rand() % 30 + 1;
	this->name = std::string(length, '\0');
	for (int i = 0; i < length; i++)
		this->name[i] = alphabet[rand() % 26];
	this->name[0] -= 32;
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
	std::cout << "Zombie create with name: " <<this->name << "and type: " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed with name: " <<this->name << "and type: " << this->type << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " (" << this->type << ") Braiiiiiiinnnssss..." << std::endl;
}
