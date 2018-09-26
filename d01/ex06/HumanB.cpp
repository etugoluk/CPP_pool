#include "HumanB.hpp"

// HumanB::~HumanB()
// {
// 	delete w_b;
// }

void HumanB::setWeapon(Weapon &w)
{
	this->w_b = &w;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->w_b->getType() << std::endl;
}
