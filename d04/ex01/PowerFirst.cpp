
#include "PowerFirst.hpp"

PlasmaRifle(std::string const & name = "Power Fist", int apcost = 8, int damage = 50) {
}

~PlasmaRifle() {

}

std::string getName() const {
	return name;
}

int getAPCost() const {
	return APcost;
}

int getDamage() const {
	return Damage;
}

void attack() {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
