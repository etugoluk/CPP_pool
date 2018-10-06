
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() {
	name = "Plasma Rifle";
	apCost = 5;
	damage = 21;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apCost = 5, int damage = 21) : AWeapon(name, apCost, damage) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & pr) {
	*this = pr;
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & pr) {
	if (this != &pr)
	{
		this->name = pr.getName();
		this->apCost = pr.getAPCost();
		this->damage = pr.getDamage();
	}
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
