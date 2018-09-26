#include "Zombie.hpp"

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
