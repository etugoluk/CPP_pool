#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	Weapon *w_a;
	std::string name;
public:
	// HumanA(std::string name, Waepon w_a("default")):name(name) {}
	HumanA(std::string name, Weapon *w_a = new Weapon("default")): w_a(w_a), name(name) {}
	// ~HumanA();
	void setWeapon(Weapon &w);
	void attack();
};

#endif