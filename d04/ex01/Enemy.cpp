#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {}

Enemy::Enemy(Enemy const & e) {
	*this = e;
}

Enemy & Enemy::operator=(Enemy const & e) {
	if (this != &e) {
		hp = e.getHP();
		type = e.getType();
	}
	return *this;
}

Enemy::~Enemy() {}

std::string Enemy::getType() const {
	return type;
}

int Enemy::getHP() const {
	return hp;
}

void Enemy::setHP(int hp) {
	this->hp = hp;
}

void Enemy::takeDamage(int n) {
	if (n < 0)
		return ;
	if (hp < n)
		hp = 0;
	else
		hp -= n;
}
