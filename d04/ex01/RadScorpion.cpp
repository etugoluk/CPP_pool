#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy() {
	hp = 80;
	type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type = "RadScorpion") : Enemy(hp, type) {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & rs) {
	std::cout << "* click click click *" << std::endl;
	*this = rs;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator = (RadScorpion const & rs) {
	if (this != &rs) {
		hp = rs.getHP();
		type = rs.getType();
	}
	return *this;
}
