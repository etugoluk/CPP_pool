#include "Character.hpp"

Character::Character() {
	ap = 40;
}

Character::Character(std::string const & name) {
	name = name;
	ap = 40;
}

Character::Character(std::string const & name, int ap = 40, Aweapon* aw = NULL) : name(name), ap(ap), aw(aw) {}

Character::Character(Character const & ch) {
	*this = ch;
}

Character::~Character() {}

Character & Character::operator = (Character const & ch) {
	if (this != &ch) {
		ap = ch.getAp();
		name = ch.getName();
	}
	return *this;
}

void Character::recoverAP() {
	ap += 10;
}

void Character::equip(AWeapon* aw) {
	// return aw;
}

void Character::attack(Enemy* e) {
	if (!ap)
	{
		std::cout << "Not enough action points" << std::endl;
		return ;
	}
	aw.attack();
	std::cout << name << " attacks " << e.getName() << " with a " << aw.getName() << std::endl;
}

std::string Character::getName() const {
	return name;
}

int Character::getAp() const {
	return ap;
}

AWeapon* Character::getAw() const {
	return aw;
}

std::ostream & operator <<(std::ostream &os, Character const &ch) {
	std::cout << name << " has " << ap << " AP and wields a " << aw.getName() << std::endl;
}