#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	Weapon *w_b;
	std::string name;
public:
	// HumanB(std::string name):name(name) {}
	HumanB(std::string name, Weapon *w_b = new Weapon("default")): w_b(w_b), name(name){}
	// ~HumanB();
	void setWeapon(Weapon &w);
	void attack();
};

#endif