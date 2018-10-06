#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {

protected:
	std::string name;
	int			damage;
	int			apCost;

public:
	AWeapon();
	AWeapon(std::string const & name, int apCost, int damage);
	AWeapon(AWeapon const & aw);
	virtual ~AWeapon();

	AWeapon & operator = (AWeapon const & aw);

	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif