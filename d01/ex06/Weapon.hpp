#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string _type;
public:
	Weapon(std::string const &type);
	std::string const &getType() const;
	void setType(std::string const &type);
};

#endif