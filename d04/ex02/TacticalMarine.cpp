#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &tm) {
	*this = tm;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine & TacticalMarine::operator = (TacticalMarine const &tm) {
	return *this;
}

TacticalMarine &	TacticalMarine::clone() {
	return TacticalMarine(*this);
}

void	TacticalMarine::battleCry() {
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack() {
	std::cout << "* attacks with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() {
	std::cout << "* attacks with chainsword *" << std::endl;
}
