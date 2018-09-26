#include "HumanA.hpp"

// HumanA::~HumanA()
// {
// 	delete w_a;
// }

void HumanA::setWeapon(Weapon &w)
{
	this->w_a = &w;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->w_a->getType() << std::endl;
}
