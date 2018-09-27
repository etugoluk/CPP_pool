#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	Weapon *w_b;
	std::string name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &w);
	void attack();
};

#endif