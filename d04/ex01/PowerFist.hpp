#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist();
	PowerFist(std::string const & name, int apCost, int damage);
	PowerFist(PowerFist const & pf);
	~PowerFist();

	PowerFist & operator = (PowerFist const & pf);

	virtual void attack() const;
};

#endif