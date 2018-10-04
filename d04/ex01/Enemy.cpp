#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {}

Enemy::Enemy(Enemy const & e) {

}


Enemy & Enemy::operator=(Enemy const & e) {
	if (this != &e) {
		hp = e.getHP();
		type = e.getType();
	}
	return *this;
}


int Enemy::getHP() const {

}
