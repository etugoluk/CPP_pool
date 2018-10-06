
#include "PowerFist.hpp"

PowerFist::PowerFist() {
	name = "Power Fist";
	apCost = 8;
	damage = 50;
}

PowerFist::PowerFist(std::string const & name, int apCost = 8, int damage = 50) : AWeapon(name, apCost, damage) {}

PowerFist::PowerFist(PowerFist const & pf) {
	*this = pf;
}

PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator = (PowerFist const & pf) {
	if (this != &pf)
	{
		this->name = pf.getName();
		this->apCost = pf.getAPCost();
		this->damage = pf.getDamage();
	}
	return *this;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
