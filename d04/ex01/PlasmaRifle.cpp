
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() {
	name = "Plasma Rifle";
	apcost = 5;
	damage = 21;
}

PlasmaRifle::PlasmaRifle(std::string const & name = "Plasma Rifle", int apcost = 5, int damage = 21) : AWeapon(name, apcost, damage) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & pr) {
	*this = pr;
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & pr) {
	if (this != &pr)
	{
		this->name = pr.getName();
		this->apcost = pr.getAPCost();
		this->damage = pr.getDamage();
	}
	return *this;
}

void PlasmaRifle::attack() {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
