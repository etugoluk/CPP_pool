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
	if (this != &tm)
		add = tm.getAdd();
	return *this;
}

int		AssaultTerminator::getAdd() const {
	return add;
}

ISpaceMarine* AssaultTerminator::clone( void ) const
{
	return new AssaultTerminator(*this);
}

void	AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}
