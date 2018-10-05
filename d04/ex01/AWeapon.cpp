#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage) {}

AWeapon::AWeapon(AWeapon const & aw) {
	*this = aw;
}

AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator = (AWeapon const & aw) {
	if (this != &aw)
	{
		this->name = aw.getName();
		this->apcost = aw.getAPCost();
		this->damage = aw.getDamage();
	}
	return *this;
}

std::string virtual AWeapon::getName() const {
	return name;
}

int AWeapon::getAPCost() const {
	return apcost;
}

int AWeapon::getDamage() const {
	return damage;
}
