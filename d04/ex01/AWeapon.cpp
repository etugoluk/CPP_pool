#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apCost, int damage) : name(name), damage(damage), apCost(apCost) {}

AWeapon::AWeapon(AWeapon const & aw) {
	*this = aw;
}

AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator = (AWeapon const & aw) {
	if (this != &aw)
	{
		this->name = aw.getName();
		this->apCost = aw.getAPCost();
		this->damage = aw.getDamage();
	}
	return *this;
}

std::string AWeapon::getName() const {
	return name;
}

int AWeapon::getAPCost() const {
	return apCost;
}

int AWeapon::getDamage() const {
	return damage;
}
