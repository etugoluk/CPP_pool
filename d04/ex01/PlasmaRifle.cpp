
#include "PlasmaRifle.hpp"

PlasmaRifle(std::string const & name = "Plasma Rifle", int apcost = 5, int damage = 21) {
}

~PlasmaRifle() {
}

std::string getName() const {
	return (name);
}

int getAPCost() const {
	return (APcost);
}

int getDamage() const {
	return (Damage);
}

void attack() {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
