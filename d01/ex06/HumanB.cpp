#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{

}

void HumanB::setWeapon(Weapon &w)
{
	this->w_b = &w;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->w_b->getType() << std::endl;
}
