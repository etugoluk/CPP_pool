#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	Weapon *w_a;
	std::string name;
public:
	HumanA(std::string name, Weapon &w_a);
	void attack();
};

#endif