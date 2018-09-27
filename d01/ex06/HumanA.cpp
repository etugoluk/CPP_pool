#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w_a): w_a(&w_a), name(name)
{
	
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->w_a->getType() << std::endl;
}
