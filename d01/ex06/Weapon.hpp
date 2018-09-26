#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string type;
public:
	Weapon(std::string type) : type(type){}
	const std::string &getType();
	void setType(const std::string &type);
};

#endif