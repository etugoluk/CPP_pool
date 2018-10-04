#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFirst : public AWeapon {

public:
	PowerFirst();
	PowerFirst(std::string const & name, int apcost, int damage);
	PowerFirst(PowerFirst const & pf);
	~PowerFirst();

	PowerFirst & operator = (PowerFirst const & pf);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	void attack();
};

#endif