
#include "PowerFist.hpp"

PowerFist::PowerFist() {
	name = "Power Fist";
	apcost = 8;
	damage = 50;
}

PowerFist::PowerFist(std::string const & name = "Power Fist", int apcost = 8, int damage = 50) : AWeapon(name, apcost, damage) {}

PowerFist::PowerFist(PowerFirst const & pf) {
	*this = pf;
}

PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator = (PowerFist const & pf) {
	if (this != &pf)
	{
		this->name = pf.getName();
		this->apcost = pf.getAPCost();
		this->damage = pf.getDamage();
	}
	return *this;
}

void PowerFist::attack() {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
