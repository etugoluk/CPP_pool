#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
	std::string name;
	int			Damage;
	int			APCost;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & aw);
	virtual ~AWeapon();

	AWeapon & operator = (AWeapon const & aw);

	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif