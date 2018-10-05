#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist();
	PowerFist(std::string const & name, int apcost, int damage);
	PowerFist(PowerFirst const & pf);
	~PowerFist();

	PowerFist & operator = (PowerFist const & pf);

	void attack();
};

#endif