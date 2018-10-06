#include "Character.hpp"

Character::Character() {
	ap = 40;
}

Character::Character(std::string const & name) {
	this->name = name;
	this->ap = 40;
	this->aw = NULL;
}

Character::Character(std::string const & name, int ap = 40, AWeapon* aw = NULL) : name(name), ap(ap), aw(aw) {}

Character::Character(Character const & ch) {
	*this = ch;
}

Character::~Character() {
	delete aw;
}

Character & Character::operator = (Character const & ch) {
	if (this != &ch) {
		ap = ch.getAp();
		name = ch.getName();
	}
	return *this;
}

void Character::recoverAP() {
	if (ap + 10 > 40)
		ap = 40;
	else
		ap += 10;
}

void Character::equip(AWeapon* aw) {
	this->aw = aw;
}

void Character::attack(Enemy* e) {
	if (!ap)
	{
		std::cout << "Not enough action points" << std::endl;
		return ;
	}
	if (!aw)
		return ;
	ap -= aw->getAPCost();
	std::cout << name << " attacks " << e->getType() << " with a " << aw->getName() << std::endl;
	aw->attack();
	e->takeDamage(aw->getDamage());
	if (e->getHP() <= 0)
		delete e;
}

std::string Character::getName() const {
	return name;
}

int Character::getAp() const {
	return ap;
}

AWeapon* Character::getAweapon() const {
	return aw;
}

std::ostream & operator <<(std::ostream &os, Character const &ch) {
	if (!ch.getAweapon())
		os << ch.getName() << " has " << ch.getAp() << " AP and is unarmed" << std::endl;
	else
		os << ch.getName() << " has " << ch.getAp() << " AP and wields a " << ch.getAweapon()->getName() << std::endl;
	return os;
}