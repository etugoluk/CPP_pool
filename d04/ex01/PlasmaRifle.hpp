#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(std::string const & name, int apCost, int damage);
	PlasmaRifle(PlasmaRifle const & pr);
	~PlasmaRifle();

	PlasmaRifle & operator = (PlasmaRifle const & pr);

	virtual void attack() const;
};

#endif