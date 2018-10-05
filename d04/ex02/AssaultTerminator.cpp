#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &tm) {
	*this = tm;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator = (AssaultTerminator const &tm) {
	return *this;
}

void	AssaultTerminator::battleCry() {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack() {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() {
	std::cout << "* attacks with chainfists *" << std::endl;
}
