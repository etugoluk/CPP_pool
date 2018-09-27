#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : type(type), name(name)
{
	std::cout << "Zombie is created with name: " <<this->name << " and type: " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie is destroyed with name: " <<this->name << " and type: " << this->type << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " (" << this->type << ") Braiiiiiiinnnssss..." << std::endl;
}
