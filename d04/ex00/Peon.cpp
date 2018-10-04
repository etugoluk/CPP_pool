#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & p) {
	*this = p;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator =(Peon const & p) {
	if (this != &p)
	{
		this->name = p.getName();
	}
	return *this;
}

void Peon::getPolymorphed() const {
	std::cout << "NAME has been turned into a pink pony !" << std::endl;
}

std::ostream & operator << (std::ostream &os, Peon const & p) {
	os << "I am " << p.getName() << " and I like otters !" << std::endl;
	return os;
}