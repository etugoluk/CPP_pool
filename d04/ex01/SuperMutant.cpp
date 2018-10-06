#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy() {
	hp = 170;
	type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type = "Super Mutant") : Enemy(hp, type) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & sm) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	*this = sm;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator = (SuperMutant const & sm) {
	if (this != &sm) {
		hp = sm.getHP();
		type = sm.getType();
	}
	return *this;
}

void SuperMutant::takeDamage(int n) {
	n -= 3;
	if (n < 0)
		return ;
	if (hp < n)
		hp = 0;
	else
		hp -= n;
}
